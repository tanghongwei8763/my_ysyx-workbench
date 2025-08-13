#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>
#include <stdint.h>  // 添加此头文件以支持uint32_t, uint64_t等类型

// gcc -o cachesim cachesim.cpp -lm
// ./cachesim itrace.bin.bz2

// 缓存配置参数范围（可根据需要调整）
#define SIZE_OPTIONS 4
#define ASSOC_OPTIONS 3
#define LINE_OPTIONS 3

const int cache_sizes[SIZE_OPTIONS] = {1024, 2048, 4096, 8192};  // 1KB, 2KB, 4KB, 8KB
const int associativities[ASSOC_OPTIONS] = {1, 2, 4};             // 1路, 2路, 4路
const int line_sizes[LINE_OPTIONS] = {16, 32, 64};                // 块大小: 16B, 32B, 64B

// 指令跟踪记录结构
typedef struct {
    uint32_t pc;         // 程序计数器地址
} TraceRecord;

// 缓存块结构
typedef struct {
    bool valid;          // 有效位
    uint32_t tag;        // 标签
    int lru_counter;     // LRU计数器(值越大表示越近被访问)
} CacheLine;

// 缓存组结构
typedef struct {
    CacheLine *lines;    // 组内的缓存块
} CacheSet;

// 缓存整体结构
typedef struct {
    // 配置参数
    int size;            // 缓存大小(字节)
    int associativity;   // 相联度
    int line_size;       // 块大小(字节)
    
    // 内部结构
    CacheSet *sets;      // 缓存组数组
    int num_sets;        // 组数
    int offset_bits;     // 块内偏移位数
    int index_bits;      // 组索引位数
    
    // 性能统计
    uint64_t total_accesses;  // 总访问次数
    uint64_t hits;            // 命中次数
    uint64_t misses;          // 失效次数
} Cache;

// 计算以2为底的对数(用于地址划分)
static int log2_int(int x) {
    if (x <= 0) return -1;
    int bits = 0;
    while (x > 1) {
        bits++;
        x >>= 1;
    }
    return bits;
}

// 初始化缓存
static Cache* cache_init(int size, int assoc, int line_size) {
    Cache *cache = (Cache*)malloc(sizeof(Cache));
    if (!cache) {
        fprintf(stderr, "内存分配失败\n");
        exit(EXIT_FAILURE);
    }

    // 设置缓存参数
    cache->size = size;
    cache->associativity = assoc;
    cache->line_size = line_size;
    
    // 计算地址划分位数
    cache->offset_bits = log2_int(line_size);
    int total_lines = size / line_size;
    cache->num_sets = total_lines / assoc;
    cache->index_bits = log2_int(cache->num_sets);

    // 初始化缓存组和块
    cache->sets = (CacheSet*)malloc(sizeof(CacheSet) * cache->num_sets);
    if (!cache->sets) {
        fprintf(stderr, "内存分配失败\n");
        free(cache);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < cache->num_sets; i++) {
        cache->sets[i].lines = (CacheLine*)malloc(sizeof(CacheLine) * assoc);
        if (!cache->sets[i].lines) {
            fprintf(stderr, "内存分配失败\n");
            // 释放已分配的内存
            for (int j = 0; j < i; j++) free(cache->sets[j].lines);
            free(cache->sets);
            free(cache);
            exit(EXIT_FAILURE);
        }
        // 初始化缓存块
        for (int j = 0; j < assoc; j++) {
            cache->sets[i].lines[j].valid = false;
            cache->sets[i].lines[j].tag = 0;
            cache->sets[i].lines[j].lru_counter = 0;
        }
    }

    // 初始化性能统计
    cache->total_accesses = 0;
    cache->hits = 0;
    cache->misses = 0;

    return cache;
}

// 释放缓存
static void cache_free(Cache *cache) {
    if (cache) {
        for (int i = 0; i < cache->num_sets; i++) {
            free(cache->sets[i].lines);
        }
        free(cache->sets);
        free(cache);
    }
}

// 访问缓存
static void cache_access(Cache *cache, uint32_t pc) {
    cache->total_accesses++;

    // 地址划分
    uint32_t offset = pc & ((1 << cache->offset_bits) - 1);
    uint32_t index = (pc >> cache->offset_bits) & ((1 << cache->index_bits) - 1);
    uint32_t tag = pc >> (cache->offset_bits + cache->index_bits);

    CacheSet *set = &cache->sets[index];
    int hit_line = -1;

    // 检查是否命中
    for (int i = 0; i < cache->associativity; i++) {
        if (set->lines[i].valid && set->lines[i].tag == tag) {
            hit_line = i;
            cache->hits++;
            break;
        }
    }

    // 命中处理 - 更新LRU
    if (hit_line != -1) {
        for (int i = 0; i < cache->associativity; i++) {
            if (i != hit_line) {
                if (set->lines[i].valid) {
                    set->lines[i].lru_counter--;
                }
            } else {
                set->lines[i].lru_counter = cache->associativity - 1;
            }
        }
        return;
    }

    // 未命中处理 - 替换策略(LRU)
    cache->misses++;
    int replace_line = 0;
    int min_lru = set->lines[0].lru_counter;

    // 找到LRU块
    for (int i = 1; i < cache->associativity; i++) {
        if (set->lines[i].lru_counter < min_lru) {
            min_lru = set->lines[i].lru_counter;
            replace_line = i;
        }
    }

    // 更新替换块
    set->lines[replace_line].valid = true;
    set->lines[replace_line].tag = tag;
    set->lines[replace_line].lru_counter = cache->associativity - 1;

    // 更新其他块的LRU计数器
    for (int i = 0; i < cache->associativity; i++) {
        if (i != replace_line && set->lines[i].valid) {
            set->lines[i].lru_counter--;
        }
    }
}

// 从压缩文件读取指令流并模拟缓存
static double simulate_cache(int size, int assoc, int line_size, const char *trace_file) {
    // 初始化缓存
    Cache *cache = cache_init(size, assoc, line_size);
    if (!cache) return -1;

    // 打开压缩的跟踪文件
    char cmd[256];
    snprintf(cmd, sizeof(cmd), "bzcat %s", trace_file);
    FILE *fp = popen(cmd, "r");
    if (!fp) {
        fprintf(stderr, "无法打开跟踪文件: %s\n", trace_file);
        cache_free(cache);
        return -1;
    }

    // 读取并处理所有指令
    TraceRecord rec;
    while (fread(&rec, sizeof(TraceRecord), 1, fp) == 1) {
        cache_access(cache, rec.pc);
    }

    // 关闭文件并清理
    pclose(fp);

    // 计算IPC (假设缓存命中延迟为1周期，失效延迟为20周期)
    const int hit_latency = 1;
    const int miss_latency = 20;
    uint64_t total_cycles = (cache->hits * hit_latency) + (cache->misses * miss_latency);
    double ipc = (total_cycles > 0) ? (double)cache->total_accesses / total_cycles : 0;

    // 输出当前配置的结果
    printf("配置: 大小=%dkB, 相联度=%d, 块大小=%dB | 命中率=%.2f%% | IPC=%.4f\n",
           size / 1024, assoc, line_size,
           (double)cache->hits / cache->total_accesses * 100, ipc);

    // 释放资源
    cache_free(cache);
    return ipc;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "用法: %s <itrace.bin.bz2>\n", argv[0]);
        return EXIT_FAILURE;
    }

    const char *trace_file = argv[1];
    double max_ipc = 0;
    int best_size = 0, best_assoc = 0, best_line = 0;

    printf("开始缓存参数探索...\n\n");

    // 遍历所有参数组合
    for (int s = 0; s < SIZE_OPTIONS; s++) {
        for (int a = 0; a < ASSOC_OPTIONS; a++) {
            for (int l = 0; l < LINE_OPTIONS; l++) {
                double ipc = simulate_cache(
                    cache_sizes[s], 
                    associativities[a], 
                    line_sizes[l], 
                    trace_file
                );

                // 更新最优配置
                if (ipc > max_ipc) {
                    max_ipc = ipc;
                    best_size = cache_sizes[s];
                    best_assoc = associativities[a];
                    best_line = line_sizes[l];
                }
            }
        }
    }

    // 输出最优结果
    printf("\n探索完成! 最优配置:\n");
    printf("缓存大小: %dkB, 相联度: %d, 块大小: %dB | 最大IPC=%.4f\n",
           best_size / 1024, best_assoc, best_line, max_ipc);

    return EXIT_SUCCESS;
}
