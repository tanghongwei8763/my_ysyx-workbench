#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <am.h>
#include <amdev.h>
#include <klib-macros.h>

// 游戏常量定义
#define GRID_SIZE 10          // 游戏地图尺寸(10x10)
#define TILE_SIZE 32          // 每个格子的像素大小
#define FPS 10                // 帧率控制
#define FRAME_DELAY (1000000 / FPS)  // 每帧延迟(微秒)
#define INT_MAX   100000

// 颜色定义
#define COLOR_WALL        0x008B4513  // 墙壁棕色
#define COLOR_FLOOR       0x00F5F5DC  // 地板米色
#define COLOR_BOX         0x00CD853F  // 箱子秘鲁棕色
#define COLOR_TARGET      0x0000CED1  // 目标点青色
#define COLOR_PLAYER      0x00FF6347  // 玩家红色
#define COLOR_BOX_ON_TARGET 0x00FF4500  // 目标点上的箱子（橙色）
#define COLOR_WHITE       0x00FFFFFF  // 白色（文字）
#define COLOR_GREEN       0x0000FF00  // 绿色（胜利文字）

// 游戏元素枚举 - 分离基础元素和叠加元素
typedef enum {
    BASE_FLOOR,    // 基础地板
    BASE_WALL,     // 基础墙壁
    BASE_TARGET    // 基础目标点
} BaseType;

typedef enum {
    OVERLAY_NONE,  // 无叠加元素
    OVERLAY_BOX,   // 箱子
    OVERLAY_PLAYER // 玩家
} OverlayType;

// 游戏状态枚举
typedef enum {
    PLAYING,
    WON,
    EXITED
} GameState;

// 玩家位置
static int player_x, player_y;

// 游戏地图 - 分离基础元素和叠加元素
static BaseType base_map[GRID_SIZE][GRID_SIZE] = {
    {BASE_WALL, BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_WALL , BASE_WALL , BASE_WALL  , BASE_WALL},
    {BASE_WALL, BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_WALL , BASE_WALL , BASE_WALL  , BASE_WALL},
    {BASE_WALL, BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_FLOOR , BASE_FLOOR , BASE_WALL , BASE_FLOOR, BASE_FLOOR , BASE_WALL},
    {BASE_WALL, BASE_WALL  , BASE_WALL  , BASE_FLOOR , BASE_FLOOR , BASE_FLOOR , BASE_WALL , BASE_FLOOR, BASE_FLOOR , BASE_WALL},
    {BASE_WALL, BASE_WALL  , BASE_WALL  , BASE_FLOOR , BASE_FLOOR , BASE_FLOOR , BASE_FLOOR, BASE_FLOOR, BASE_FLOOR , BASE_WALL},
    {BASE_WALL, BASE_WALL  , BASE_WALL  , BASE_FLOOR , BASE_FLOOR , BASE_WALL  , BASE_WALL , BASE_FLOOR, BASE_FLOOR , BASE_WALL},
    {BASE_WALL, BASE_WALL  , BASE_WALL  , BASE_FLOOR , BASE_FLOOR , BASE_FLOOR , BASE_WALL , BASE_FLOOR, BASE_WALL  , BASE_WALL},
    {BASE_WALL, BASE_TARGET, BASE_TARGET, BASE_TARGET, BASE_TARGET, BASE_TARGET, BASE_FLOOR, BASE_FLOOR, BASE_WALL  , BASE_WALL},
    {BASE_WALL, BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_WALL , BASE_WALL , BASE_WALL  , BASE_WALL},
    {BASE_WALL, BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_WALL  , BASE_WALL , BASE_WALL , BASE_WALL  , BASE_WALL}
};

static OverlayType overlay_map[GRID_SIZE][GRID_SIZE] = {
    {OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE},
    {OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE},
    {OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_PLAYER, OVERLAY_NONE},
    {OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE},
    {OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_BOX , OVERLAY_NONE, OVERLAY_BOX , OVERLAY_NONE, OVERLAY_BOX , OVERLAY_NONE, OVERLAY_NONE},
    {OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_BOX , OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE},
    {OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_BOX , OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE},
    {OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE},
    {OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE},
    {OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE, OVERLAY_NONE}
};

// 游戏状态和统计信息
static GameState game_state = PLAYING;
static int moves = 0;          // 移动步数
static int boxes_on_target = 0; // 目标点上的箱子数量
static int total_targets = 0;   // 总目标点数量

// 屏幕信息
static int screen_width, screen_height;
static int grid_offset_x, grid_offset_y;

// 预分配的缓冲区，避免频繁malloc/free
static uint32_t *tile_buf = NULL;
static uint32_t *player_buf = NULL;
static uint32_t *box_buf = NULL;
static uint32_t *char_buf = NULL;

// 安全绘制检查：确保绘制区域在屏幕范围内
static bool is_drawable(int x, int y, int w, int h) {
    return (x >= 0) && (y >= 0) && 
           (x + w <= screen_width) && 
           (y + h <= screen_height);
}

// 初始化缓冲区
static void init_buffers() {
    // 只分配一次，避免频繁malloc/free导致的内存碎片
    tile_buf = (uint32_t*)malloc(TILE_SIZE * TILE_SIZE * sizeof(uint32_t));
    int player_size = TILE_SIZE / 2;
    player_buf = (uint32_t*)malloc(player_size * player_size * sizeof(uint32_t));
    int box_size = TILE_SIZE * 3 / 4;
    box_buf = (uint32_t*)malloc(box_size * box_size * sizeof(uint32_t));
    char_buf = (uint32_t*)malloc(10 * 10 * sizeof(uint32_t)); // 字符缓冲区
}

// 释放缓冲区
static void free_buffers() {
    if (tile_buf) free(tile_buf);
    if (player_buf) free(player_buf);
    if (box_buf) free(box_buf);
    if (char_buf) free(char_buf);
}

// 初始化游戏
static void init_game() {
    // 获取屏幕尺寸
    AM_GPU_CONFIG_T gpu_cfg = io_read(AM_GPU_CONFIG);
    screen_width = gpu_cfg.width;
    screen_height = gpu_cfg.height;
    
    // 初始化缓冲区
    init_buffers();
    
    // 找到玩家初始位置和目标点数量
    for (int y = 0; y < GRID_SIZE; y++) {
        for (int x = 0; x < GRID_SIZE; x++) {
            if (overlay_map[y][x] == OVERLAY_PLAYER) {
                player_x = x;
                player_y = y;
            }
            if (base_map[y][x] == BASE_TARGET) {
                total_targets++;
                // 检查初始状态下是否有箱子在目标点上
                if (overlay_map[y][x] == OVERLAY_BOX) {
                    boxes_on_target++;
                }
            }
        }
    }
    
    // 计算网格在屏幕上的位置（确保在屏幕范围内）
    int grid_total_width = GRID_SIZE * TILE_SIZE;
    int grid_total_height = GRID_SIZE * TILE_SIZE;
    
    grid_offset_x = (screen_width - grid_total_width) / 2;
    grid_offset_y = (screen_height - grid_total_height) / 2;
    
    // 确保偏移不为负（屏幕小于网格时左上角对齐）
    grid_offset_x = (grid_offset_x < 0) ? 0 : grid_offset_x;
    grid_offset_y = (grid_offset_y < 0) ? 0 : grid_offset_y;
}

// 获取基础格子颜色
static uint32_t get_base_color(int x, int y) {
    switch (base_map[y][x]) {
        case BASE_WALL: return COLOR_WALL;
        case BASE_TARGET: return COLOR_TARGET;
        default: return COLOR_FLOOR; // BASE_FLOOR
    }
}

// 绘制单个格子（只绘制基础颜色）
static void draw_base_tile(int x, int y) {
    if (!tile_buf) return; // 缓冲区分配失败则返回
    
    int tile_screen_x = grid_offset_x + x * TILE_SIZE;
    int tile_screen_y = grid_offset_y + y * TILE_SIZE;
    
    // 检查绘制区域是否在屏幕内
    if (!is_drawable(tile_screen_x, tile_screen_y, TILE_SIZE, TILE_SIZE)) {
        return;
    }
    
    uint32_t color = get_base_color(x, y);
    
    // 填充颜色
    for (int i = 0; i < TILE_SIZE * TILE_SIZE; i++) {
        tile_buf[i] = color;
    }
    
    // 绘制边框（黑色）
    uint32_t border_color = 0x00000000;
    for (int i = 0; i < TILE_SIZE; i++) {
        tile_buf[i] = border_color;  // 上边框
        tile_buf[i * TILE_SIZE] = border_color;  // 左边框
        tile_buf[(TILE_SIZE - 1) * TILE_SIZE + i] = border_color;  // 下边框
        tile_buf[i * TILE_SIZE + TILE_SIZE - 1] = border_color;  // 右边框
    }
    
    // 绘制到屏幕
    io_write(AM_GPU_FBDRAW, tile_screen_x, tile_screen_y, tile_buf, TILE_SIZE, TILE_SIZE, false);
}

// 绘制玩家（叠加在基础格子上）
static void draw_player(int x, int y) {
    if (!player_buf) return; // 缓冲区分配失败则返回
    
    // 先绘制基础格子
    draw_base_tile(x, y);
    
    int player_size = TILE_SIZE / 2;
    int player_screen_x = grid_offset_x + x * TILE_SIZE + (TILE_SIZE - player_size) / 2;
    int player_screen_y = grid_offset_y + y * TILE_SIZE + (TILE_SIZE - player_size) / 2;
    
    // 检查绘制区域是否在屏幕内
    if (!is_drawable(player_screen_x, player_screen_y, player_size, player_size)) {
        return;
    }
    
    // 填充玩家颜色
    for (int i = 0; i < player_size * player_size; i++) {
        player_buf[i] = COLOR_PLAYER;
    }
    
    io_write(AM_GPU_FBDRAW, player_screen_x, player_screen_y, player_buf, player_size, player_size, false);
}

// 绘制箱子（叠加在基础格子上）
static void draw_box(int x, int y) {
    if (!box_buf) return; // 缓冲区分配失败则返回
    
    // 先绘制基础格子
    draw_base_tile(x, y);
    
    int box_size = TILE_SIZE * 3 / 4;
    int box_screen_x = grid_offset_x + x * TILE_SIZE + (TILE_SIZE - box_size) / 2;
    int box_screen_y = grid_offset_y + y * TILE_SIZE + (TILE_SIZE - box_size) / 2;
    
    // 检查绘制区域是否在屏幕内
    if (!is_drawable(box_screen_x, box_screen_y, box_size, box_size)) {
        return;
    }
    
    // 箱子颜色：在目标点上为橙色，否则为棕色
    uint32_t color = (base_map[y][x] == BASE_TARGET) ? COLOR_BOX_ON_TARGET : COLOR_BOX;
    for (int i = 0; i < box_size * box_size; i++) {
        box_buf[i] = color;
    }
    
    io_write(AM_GPU_FBDRAW, box_screen_x, box_screen_y, box_buf, box_size, box_size, false);
}

// 绘制整个地图
static void draw_map() {
    // 清空屏幕（黑色）- 根据屏幕尺寸动态分配缓冲区
    int clear_width = screen_width;
    int clear_height = screen_height;
    
    // 每次清理一行，避免大内存分配
    uint32_t *row_buf = (uint32_t*)malloc(clear_width * sizeof(uint32_t));
    if (row_buf) {
        memset(row_buf, 0, clear_width * sizeof(uint32_t));
        
        for (int y = 0; y < clear_height; y++) {
            io_write(AM_GPU_FBDRAW, 0, y, row_buf, clear_width, 1, false);
        }
        free(row_buf);
    }
    
    // 绘制每个格子
    for (int y = 0; y < GRID_SIZE; y++) {
        for (int x = 0; x < GRID_SIZE; x++) {
            // 检查格子是否在屏幕可见范围内
            int tile_screen_x = grid_offset_x + x * TILE_SIZE;
            int tile_screen_y = grid_offset_y + y * TILE_SIZE;
            if (!is_drawable(tile_screen_x, tile_screen_y, TILE_SIZE, TILE_SIZE)) {
                continue; // 跳过屏幕外的格子
            }
            
            // 先绘制基础格子
            draw_base_tile(x, y);
            
            // 再绘制叠加元素
            switch (overlay_map[y][x]) {
                case OVERLAY_BOX:
                    draw_box(x, y);
                    break;
                case OVERLAY_PLAYER:
                    draw_player(x, y);
                    break;
                default:
                    break; // 无叠加元素，只显示基础格子
            }
        }
    }
    
    // 刷新显示
    io_write(AM_GPU_FBDRAW, 0, 0, NULL, 0, 0, true);
}

// 绘制单个字符
static void draw_char(int x, int y, char c, uint32_t color) {
    if (!char_buf) return; // 缓冲区分配失败则返回
    
    const int size = 10; // 字符尺寸10x10
    const int max_idx = size * size - 1; // 缓冲区最大索引
    
    // 检查绘制区域是否在屏幕内
    if (!is_drawable(x, y, size, size)) {
        return;
    }
    
    // 初始化为黑色背景
    for (int i = 0; i < size * size; i++) {
        char_buf[i] = 0x00000000;
    }
    
    // 安全设置像素的宏，自动检查边界
    #define SET_PIXEL(row, col) \
        do { \
            if ((row) >= 0 && (row) < size && (col) >= 0 && (col) < size) { \
                int idx = (row) * size + (col); \
                if (idx >= 0 && idx <= max_idx) { \
                    char_buf[idx] = color; \
                } \
            } \
        } while(0)
    
    switch (c) {
        case '0': // 数字0
            for (int i = 2; i < size-2; i++) SET_PIXEL(1, i); // 上
            for (int i = 2; i < size-2; i++) SET_PIXEL(size-2, i); // 下
            for (int i = 1; i < size-1; i++) SET_PIXEL(i, 1); // 左
            for (int i = 1; i < size-1; i++) SET_PIXEL(i, size-2); // 右
            break;
        case '1': // 数字1
            for (int i = 1; i < size-1; i++) SET_PIXEL(i, size-2); // 右竖
            break;
        case '2': // 数字2
            for (int i = 2; i < size-2; i++) SET_PIXEL(1, i); // 上
            for (int i = 1; i < size/2; i++) SET_PIXEL(i, size-2); // 右上
            for (int i = 2; i < size-2; i++) SET_PIXEL(size/2, i); // 中
            for (int i = size/2; i < size-1; i++) SET_PIXEL(i, 1); // 左下
            for (int i = 2; i < size-2; i++) SET_PIXEL(size-2, i); // 下
            break;
        case '3': // 数字3
            for (int i = 2; i < size-2; i++) SET_PIXEL(1, i); // 上
            for (int i = 1; i < size-1; i++) SET_PIXEL(i, size-2); // 右
            for (int i = 2; i < size-2; i++) SET_PIXEL(size/2, i); // 中
            for (int i = 2; i < size-2; i++) SET_PIXEL(size-2, i); // 下
            break;
        case '4': // 数字4
            for (int i = 1; i < size/2; i++) SET_PIXEL(i, 1); // 左上
            for (int i = 2; i < size-2; i++) SET_PIXEL(size/2, i); // 中
            for (int i = 1; i < size-1; i++) SET_PIXEL(i, size-2); // 右
            break;
        case '5': // 数字5
            for (int i = 2; i < size-2; i++) SET_PIXEL(1, i); // 上
            for (int i = 1; i < size/2; i++) SET_PIXEL(i, 1); // 左
            for (int i = 2; i < size-2; i++) SET_PIXEL(size/2, i); // 中
            for (int i = size/2; i < size-1; i++) SET_PIXEL(i, size-2); // 右下
            for (int i = 2; i < size-2; i++) SET_PIXEL(size-2, i); // 下
            break;
        case '6': // 数字6
            for (int i = 2; i < size-2; i++) SET_PIXEL(1, i); // 上
            for (int i = 1; i < size-1; i++) SET_PIXEL(i, 1); // 左
            for (int i = 2; i < size-2; i++) SET_PIXEL(size/2, i); // 中
            for (int i = size/2; i < size-1; i++) SET_PIXEL(i, size-2); // 右下
            for (int i = 2; i < size-2; i++) SET_PIXEL(size-2, i); // 下
            break;
        case '7': // 数字7
            for (int i = 2; i < size-2; i++) SET_PIXEL(1, i); // 上
            for (int i = 1; i < size-1; i++) SET_PIXEL(i, size-2); // 右
            break;
        case '8': // 数字8
            for (int i = 2; i < size-2; i++) SET_PIXEL(1, i); // 上
            for (int i = 2; i < size-2; i++) SET_PIXEL(size-2, i); // 下
            for (int i = 1; i < size-1; i++) SET_PIXEL(i, 1); // 左
            for (int i = 1; i < size-1; i++) SET_PIXEL(i, size-2); // 右
            for (int i = 2; i < size-2; i++) SET_PIXEL(size/2, i); // 中
            break;
        case '9': // 数字9
            for (int i = 2; i < size-2; i++) SET_PIXEL(1, i); // 上
            for (int i = 2; i < size-2; i++) SET_PIXEL(size-2, i); // 下
            for (int i = 1; i < size/2; i++) SET_PIXEL(i, 1); // 左上
            for (int i = 1; i < size-1; i++) SET_PIXEL(i, size-2); // 右
            for (int i = 2; i < size-2; i++) SET_PIXEL(size/2, i); // 中
            break;
        case 'Y': // 字母Y
            for (int i = 1; i < size/2; i++) {
                SET_PIXEL(i, 2 + (i - 1));
                SET_PIXEL(i, size-3 - (i - 1));
            }
            for (int i = size/2; i < size-1; i++) {
                SET_PIXEL(i, size/2);
            }
            break;
        case 'O': // 字母o
            for (int i = 2; i < size-2; i++) {
                SET_PIXEL(1, i);
                SET_PIXEL(size-2, i);
            }
            for (int i = 2; i < size-2; i++) {
                SET_PIXEL(i, 1);
                SET_PIXEL(i, size-2);
            }
            break;
        case 'U': // 字母u
            for (int i = 1; i < size-2; i++) {
                SET_PIXEL(i, 1);
                SET_PIXEL(i, size-2);
            }
            for (int i = 1; i < size-1; i++) {
                SET_PIXEL(size-2, i);
            }
            break;
        case 'W': // 字母W
            for (int i = 1; i < size-1; i++) {
                SET_PIXEL(i, 1);
                SET_PIXEL(i, size-2);
            }
            for (int i = size/2; i < size-1; i++) {
                SET_PIXEL(i, size/3);
                SET_PIXEL(i, 2*size/3);
            }
            SET_PIXEL(size/2, size/3);
            SET_PIXEL(size/2, 2*size/3);
            break;
        case 'I': // 字母i
            SET_PIXEL(1, size/2);
            SET_PIXEL(1, size/2 + 1);
            for (int i = 3; i < size-1; i++) {
                SET_PIXEL(i, size/2);
            }
            break;
        case 'N': // 字母n
            for (int i = 1; i < size-1; i++) {
                SET_PIXEL(i, 1);
                SET_PIXEL(i, size-2);
            }
            for (int i = 1; i < size-1; i++) {
                int x_pos = 1 + (i - 1);
                SET_PIXEL(i, x_pos);
            }
            break;
    }
    
    #undef SET_PIXEL // 清理宏定义
    
    io_write(AM_GPU_FBDRAW, x, y, char_buf, size, size, false);
}

// 绘制游戏信息
static void draw_info() {
    // 显示步数
    char num_str[10];
    snprintf(num_str, sizeof(num_str), "%d", moves); // 使用snprintf避免缓冲区溢出
    int num_len = strlen(num_str);
    
    // 计算数字显示位置（确保在屏幕内）
    int info_x = grid_offset_x + (GRID_SIZE * TILE_SIZE - num_len * 10) / 2;
    int info_y = grid_offset_y - 20;
    
    // 确保信息显示在屏幕内
    if (info_y < 0) info_y = 5; // 顶部边界调整
    
    // 逐个绘制数字
    for (int i = 0; i < num_len && i < 9; i++) { // 限制最大长度，避免越界
        draw_char(info_x + i * 10, info_y, num_str[i], COLOR_WHITE);
    }
    
    // 游戏胜利时显示胜利提示
    if (game_state == WON) {
        char win_msg[] = "YOU WIN";
        int msg_x = grid_offset_x + (GRID_SIZE * TILE_SIZE - strlen(win_msg) * 10) / 2;
        int msg_y = 30;
        
        // 确保胜利提示在屏幕内
        if (msg_y + 10 > screen_height) {
            msg_y = screen_height - 15; // 底部边界调整
        }
        
        for (int i = 0; i < strlen(win_msg); i++) {
            draw_char(msg_x + i * 10, msg_y, win_msg[i], COLOR_GREEN);
        }
    }
}

// 微秒级延迟函数
static void delay_us(unsigned int us) {
    // 使用更可靠的延迟方式，避免计数器溢出
    uint64_t start = io_read(AM_TIMER_UPTIME).us;
    while (io_read(AM_TIMER_UPTIME).us - start < us) {
        // 空循环等待
    }
}

// 检查移动是否有效（不超出边界且不是墙壁）
static bool can_move(int x, int y) {
    return x >= 0 && x < GRID_SIZE && y >= 0 && y < GRID_SIZE && base_map[y][x] != BASE_WALL;
}

// 检查箱子是否可以被推动
static bool can_push_box(int x, int y, int dx, int dy) {
    int nx = x + dx;
    int ny = y + dy;
    return can_move(nx, ny) && overlay_map[ny][nx] == OVERLAY_NONE;
}

// 移动玩家
static void move_player(int dx, int dy) {
    if (game_state != PLAYING) return;
    
    int new_x = player_x + dx;
    int new_y = player_y + dy;
    
    // 检查是否可以移动
    if (!can_move(new_x, new_y)) {
        return;
    }
    
    // 如果目标位置是箱子，尝试推动它
    if (overlay_map[new_y][new_x] == OVERLAY_BOX) {
        if (!can_push_box(new_x, new_y, dx, dy)) {
            return; // 无法推动箱子
        }
        
        // 更新箱子移动前的计数
        if (base_map[new_y][new_x] == BASE_TARGET) {
            boxes_on_target--;
        }
        
        // 推动箱子
        overlay_map[new_y + dy][new_x + dx] = OVERLAY_BOX;
        overlay_map[new_y][new_x] = OVERLAY_NONE;
        
        // 更新箱子移动后的计数
        if (base_map[new_y + dy][new_x + dx] == BASE_TARGET) {
            boxes_on_target++;
        }
    }
    
    // 移动玩家
    overlay_map[player_y][player_x] = OVERLAY_NONE;
    player_x = new_x;
    player_y = new_y;
    overlay_map[player_y][player_x] = OVERLAY_PLAYER;
    
    // 增加步数（限制最大值，防止溢出）
    if (moves < INT_MAX - 1) {
        moves++;
    }
    
    // 检查是否获胜（所有目标点都有箱子）
    if (boxes_on_target == total_targets) {
        game_state = WON;
    }
}

// 处理用户输入
static void handle_input() {
    AM_INPUT_KEYBRD_T key_event = io_read(AM_INPUT_KEYBRD);
    if (!key_event.keydown) return;
    
    switch (key_event.keycode) {
        case AM_KEY_W:  move_player(0, -1); break; // 上
        case AM_KEY_S:  move_player(0, 1);  break; // 下
        case AM_KEY_A:  move_player(-1, 0); break; // 左
        case AM_KEY_D:  move_player(1, 0);  break; // 右
        case AM_KEY_Q:  game_state = EXITED; break; // 退出
    }
}

// 主游戏循环
static void game_loop() {
    while (game_state != EXITED) {
        // 处理输入
        handle_input();
        
        // 绘制游戏
        draw_map();
        draw_info();
        
        // 控制帧率，使用定时器延迟而非忙循环计数
        delay_us(FRAME_DELAY);
        
        // 胜利后等待按Q退出
        if (game_state == WON) {
            while (1) {
                AM_INPUT_KEYBRD_T key_event = io_read(AM_INPUT_KEYBRD);
                if (key_event.keydown && key_event.keycode == AM_KEY_Q) {
                    game_state = EXITED;
                    break;
                }
            }
        }
    }
}

int main() {
    ioe_init();
    
    // 初始化游戏
    init_game();
    
    // 显示游戏说明
    printf("推箱子游戏\n");
    printf("使用WASD移动\n");
    printf("将所有箱子推到目标点上获胜\n");
    printf("按Q退出游戏\n");
    
    // 开始游戏循环
    game_loop();
    
    // 释放资源
    free_buffers();
    
    return 0;
}
