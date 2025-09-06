#include <iostream>
#include <cstddef>
#include <cstring>
#include <regex.h>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <string>
#include "../include/common.h"
#include "../include/monitor.h"
#include "../include/memory.h"

#ifdef CONFIG_YSYXSOC
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull.h"
extern VysyxSoCFull *top;
#define pc top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_cpu__DOT__pc
#define gpr top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__gpr_cpu__DOT__regs
#else
#include "Vysyx_25020037___024root.h"
#include "Vysyx_25020037.h"
extern Vysyx_25020037 *top;
#define pc top->rootp->ysyx_25020037__DOT__ifu_cpu__DOT__pc
#define gpr top->rootp->ysyx_25020037__DOT__gpr_cpu__DOT__regs
#endif

enum {
  TK_NOTYPE = 256, TK_DOLLAR, TK_HEX,
  TK_EQ, TK_NEQ, TK_AND, TK_P,
  TK_NUM, TK_LPAREN, TK_RPAREN
};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {
  {" +", TK_NOTYPE},    			// spaces
  {"[0-9]+", TK_NUM},				// number
  {"\\+", '+'},         			// plus
  {"\\-", '-'},					// sub
  {"\\*", '*'},					// mul   point
  {"\\/", '/'},					// div
  {"\\(", TK_LPAREN},				// left parenthesis
  {"\\)", TK_RPAREN},				// right parenthesis
  {"==", TK_EQ},       				// equal
  {"!=", TK_NEQ},       			// nequal
  {"&&", TK_AND},       			// and
  {"\\$(\\pc|$0|ra|sp|gp|tp|t[0-6]|s[0-9]|s10|s11|a[0-7])", TK_DOLLAR},		// $
  {"x", TK_HEX},                   		// hex
};

#define NR_REGEX sizeof(rules)/sizeof(rules[0])

static regex_t re[NR_REGEX] = {};

void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      printf("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
  int pri;
} Token;

static Token tokens[3200] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {

  init_regex();

  int position = 0, pos = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        //char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;
        
        position += substr_len;

        switch (rules[i].token_type) {
          case TK_NOTYPE: {		//空格
            pos += substr_len;
            break;
          }
          case TK_NUM: {		//数字
            //printf("TK_NUM\n");
            tokens[nr_token].type = TK_NUM;
            tokens[nr_token].pri = 0;
            int j = 0;
            //printf("pos %d    %c\n", pos, e[pos]);
            while (e[pos] >= '0' && e[pos] <= '9') 
            {
              //printf("我是探针\n");
              tokens[nr_token].str[j++] = e[pos++];
            }
            tokens[nr_token].str[j] = '\0';
            nr_token++;
            //printf("%d\n", position);
            break;
          }
          case '+': tokens[nr_token].type = '+';tokens[nr_token].pri = 1;nr_token++;pos++;break;
          case '-': tokens[nr_token].type = '-';tokens[nr_token].pri = 1;nr_token++;pos++;break;
          case '*': {
            if(nr_token==0 || tokens[nr_token-1].pri >= 1){	//判断指针形成的条件
              tokens[i].type = TK_P;
              tokens[i].pri = 4;		//成为指针后优先级变高
              int j = 0;
	            pos++;
	            while ((e[pos]>='0'&&e[pos]<='9') || (e[pos]>='a'&&e[pos]<='z') || (e[pos]>='A'&&e[pos]<='Z')) {
	              tokens[nr_token].str[j++] = e[pos++];
	              position++;
	            }
	            vaddr_t data;
	            sscanf(tokens[nr_token].str, "%x", &data);
	            uint32_t dtemp = pmem_read(data, 4, 0);
	            char stemp[32];
	            snprintf(stemp, sizeof(stemp), "%d", dtemp);
	            int k = 0;
	            while(k < strlen(stemp)) {
	              tokens[nr_token].str[k] = stemp[k];
	              k++;
	            }
	            tokens[nr_token].str[k] = '\0';
	            nr_token++;
	            break;
            }
            else{
              tokens[nr_token].type = '*';
              tokens[nr_token].pri = 2;
              nr_token++;
              pos++;
              break;
            }
          }
          case '/': tokens[nr_token].type = '/';tokens[nr_token].pri = 2;nr_token++;pos++;break;
          case TK_LPAREN: tokens[nr_token].type = TK_LPAREN;tokens[nr_token].pri = 2;nr_token++;pos++;break;
	        case TK_RPAREN: tokens[nr_token].type = TK_RPAREN;tokens[nr_token].pri = 0;nr_token++;pos++;break;
	        case TK_EQ: tokens[nr_token].type = TK_EQ;tokens[nr_token].pri = 3;nr_token++;pos+=2;break;
	        case TK_NEQ: tokens[nr_token].type = TK_NEQ;tokens[nr_token].pri = 3;nr_token++;pos+=2;break;
	        case TK_AND: tokens[nr_token].type = TK_AND;tokens[nr_token].pri = 3;nr_token++;pos+=2;break;
	        case TK_DOLLAR: {
	          tokens[nr_token].type = TK_DOLLAR;
	          tokens[nr_token].pri = 0;
	          int j = 0;
	          pos++;
	          memset(tokens[nr_token].str, '\0', sizeof(tokens[nr_token].str));	
	          while ((e[pos]>='0'&&e[pos]<='9') || (e[pos]>='a'&&e[pos]<='z') || (e[pos]>='A'&&e[pos]<='Z')) {
	            tokens[nr_token].str[j++] = e[pos++];
	          }
	          //printf("%s\n", tokens[nr_token].str);
	          int dtemp;
	          int judge = 0;
	          if(strcmp(tokens[nr_token].str, "pc") == 0)	{	//单独的pc寄存器
	            dtemp = pc;
	            judge = 1;
	          }
	          else {
	            for(int reg = 0; reg < 32; reg++) {		//获取$处寄存器的值
	              //printf("%s ? %s\n", tokens[nr_token].str, tempregs[reg]);
	              if(strcmp(tokens[nr_token].str, tempregs[reg]) == 0) {
	                dtemp = gpr[i];
	                judge = 1;
	                break;
	              }
	            }
	          }
	          //printf("%d\n", judge);
	          if(!judge) {
	            printf("输入寄存器名称有误\n");
	            assert(0);
	          }

            char stemp[32];
	          snprintf(stemp, sizeof(stemp), "%d", dtemp);//转化为字符串
	          int k = 0;
	          while(k < strlen(stemp)) {
	            tokens[nr_token].str[k] = stemp[k];	//重新存入str
	            //printf("%d  %c <= %c\n", k, tokens[nr_token].str[k], stemp[k]);
	            k++;
	          }
	          tokens[nr_token].str[k] = '\0';
	          nr_token++;
	          break;
	        }
	        case TK_HEX: {
	          //printf("识别为16进制\n");
	          if(e[position-2] == '0') {
	            pos += 1;
	            memset(tokens[nr_token-1].str, '\0', sizeof(tokens[nr_token].str));
	            int j = 0;
	            while ((e[pos]>='0'&&e[pos]<='9') || (e[pos]>='a'&&e[pos]<='f') || (e[pos]>='A'&&e[pos]<='F')) {
	              tokens[nr_token-1].str[j++] = e[pos++];
	              position++;
	            }
	            //printf("存入的16进制数:%s\n", tokens[nr_token-1].str);
	            int dtemp = strtol(tokens[nr_token-1].str, NULL, 16);
	            //printf("转化为10进制数:%d\n", dtemp);
	            char stemp[32];
	            snprintf(stemp, sizeof(stemp), "%d", dtemp);
	            //printf("最终存入stemp:%s\n", stemp);
	            int k = 0;
	            while(k < strlen(stemp)) {
	              tokens[nr_token-1].str[k] = stemp[k];
	              k++;
	            }
	            tokens[nr_token].str[k] = '\0';
	            break;
	          }
	          else {
	            printf("no match at position(1) %d\n%s\n%*.s^\n", position, e, position, "");
              return false;
	          }
	        }
          default: pos++;break;
        }
        break;
      }
    }
   
    if (i == NR_REGEX) {
      printf("no match at position(2) %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  return true;
}

int check_parentheses(int p, int q)	//需要实现判断括号匹配度和打开最外层相匹配的括号
{
  int banlance = 0;
  for (int j = p; j<=q; j++) {
    if (tokens[j].type == TK_LPAREN){
      banlance++;
    }
    else if (tokens[j].type == TK_RPAREN) {
      banlance--;
    }
    if(banlance<0)
      return 0;		//中途右括号不多于左括号
  }
  if(banlance != 0)
    return 0;
  //以上为判断括号是否左右匹配
  if (tokens[p].type == TK_LPAREN && tokens[q].type == TK_RPAREN) {
    int stack = 0;
    for (int i = p+1; i < q; i++) {
      if (tokens[i].type == TK_LPAREN) 
        stack++;
      else if (tokens[i].type == TK_RPAREN) {
        if(stack == 0)
          return 2;
        stack--;
      }
    }
    if(stack == 0)
      return 1;  //括号匹配并且最外层可以打开
  }
  else if (tokens[p].type != TK_LPAREN || tokens[q].type != TK_RPAREN)
    return 2;
    
  return 2;
}
  

int eval(int p, int q)
{
  if (p > q) {
    printf("Bad expression p>q\n");
    return -1;
  }
  else if (p == q) {
    //printf("已经是最小的表达式了\n");
    return atoi(tokens[p].str);
  }
  else if (check_parentheses(p, q) == 1) {
    //printf("打开括号%d  %d\n", p+1, q-1);
    return eval(p+1, q-1);
  }
  else  if(check_parentheses(p, q) == 2) {
    int min_priority = 10;
    int split = -1, first = 0, num = 0, LRPparen = 0;
    for (int i = p; i <= q; i++) {
      int priority = 0;		//优先级
      switch (tokens[i].type) {
        case TK_AND:
          if (!LRPparen) {
            priority = 1;
            break;
          }
        case TK_EQ:
        case TK_NEQ:
          if (!LRPparen) {
            priority = 2;
            break;
          }
        case TK_NUM: num=i;first++;continue;
        case '+':
        case '-':
          if (!LRPparen){
            priority = 3;	
            break;
	  }
	  else
	    continue;
        case '*':
        case '/':
          if (!LRPparen) {
            priority = 4;
            break;
          }
          else
            continue;
        case TK_LPAREN:
          //printf("(已记录%d\n", i);
          LRPparen++;
          /*
          if (split != -1)	//遇到括号前面已经有运算符，则优先以括号外的运算符划分
            goto next;
          */
          continue;
        case TK_RPAREN:
          //printf(")已弹出%d\n", i);
          LRPparen--;
          continue;
        //case TK_DOLLAR:
          
        default:
          continue;
      }
      if (priority <= min_priority) {
        min_priority = priority;
        //printf("split at here %d\n", i);
        split = i;
      }
    }
//next:
//(((342+123)*(89-12))-((567/(23+11)))*((456-321)+(78*(99/3))))-(((678/13)-34)*(456+(88-23))+(45*(77-32)))
    if (split == -1) {
      if(first == 1)
        return  atoi(tokens[num].str);
      else {
        printf("Bad expression split\n");
        return -1;
      }
    }
    int left = eval(p, split - 1);
    int right = eval(split + 1, q);
    //printf("%d\t%d\n", left, right);
    switch (tokens[split].type) {
      case TK_EQ: return left == right;
      case TK_NEQ: return left != right;
      case TK_AND: return left && right;
      case '+': return left + right;
      case '-': return left - right;
      case '*': return left * right;
      case '/':
        if (right == 0) {
          printf("The divisor cannot be zero\n");
          return -1;
        }
        return left / right;
      default:
        printf("Bad expression case\n");
        return -1;
    }        
  }
  else{
    printf("Bad expression ()\n");
    return -1;
  }
}


word_t expr(char *e, bool *success) {
  //printf("e:%s\n", e);
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  *success = true;
  
  return eval(0, nr_token-1);
}

