/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,
  TK_NUM, TK_LPAREN, TK_RPAREN
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"[0-9]+", TK_NUM},	// number
  {"\\+", '+'},         // plus
  {"\\-", '-'},		// sub
  {"\\*", '*'},		// mul
  {"\\/", '/'},		// div
  {"\\(", TK_LPAREN},	// left parenthesis
  {"\\)", TK_RPAREN},	// right parenthesis
  {"==", TK_EQ}        	// equal
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
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
        /*
        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);
        */
         
        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
    	printf("当前判断rule[%d]\n", i);
        switch (rules[i].token_type) {
          case TK_NOTYPE: {		//空格
            printf("检测到空格\n");
            pos++;
            break;
          }
          case TK_NUM: {		//数字
            tokens[nr_token].type = TK_NUM;
            int j = 0;
            while (e[pos] >= '0' && e[pos] <= '9') 
            {
              tokens[nr_token].str[j++] = e[pos++];
            }
            tokens[nr_token].str[j] = '\0';
            nr_token++;
            break;
          }
          case '+': tokens[nr_token++].type = '+';pos++;break;
          case '-': tokens[nr_token++].type = '-';pos++;break;
          case '*': tokens[nr_token++].type = '*';pos++;break;
          case '/': tokens[nr_token++].type = '/';pos++;break;
          case TK_LPAREN: tokens[nr_token++].type = TK_LPAREN;pos++;break;
	  case TK_RPAREN: tokens[nr_token++].type = TK_RPAREN;pos++;break;
	  case TK_EQ: tokens[nr_token++].type = TK_EQ;pos++;break;
          default: TODO();break;
        }
        
        break;
      }
    }
   
    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

bool check_parentheses(int p, int q, const Token tokens[])
{
  int temp = 0;		//用于判断括号是否匹配
  if (tokens[p].type != TK_LPAREN || tokens[q].type != TK_RPAREN) 
    return false;

  for (int i = p; i <= q; i++) {
    if (tokens[i].type == TK_LPAREN) temp++;
    else if (tokens[i].type == TK_RPAREN) temp--;
    if (temp < 0) 
      return false;
  }
  return (temp == 0)? true:false;
}

int eval(int p, int q, const Token tokens[])
{
  if (p > q) {
    printf("Bad expression\n");
    return -1;
  }
  else if (p == q) 
    return atoi(tokens[p].str);
  else if (check_parentheses(p, q, tokens) == true)
    return eval(p + 1, q - 1, tokens);
  else {
    int min_priority = 10;
    int split = -1;
    for (int i = p; i <= q; i++) {
      int priority = 0;		//优先级
      switch (tokens[i].type) {
        case '+':
        case '-':
          priority = 1;	
          break;
        case '*':
        case '/':
          priority = 2;
          break;
        case TK_LPAREN:
          if (split != -1)	//遇到括号前面已经有运算符，则优先以括号外的运算符划分
            goto next;
          continue;
        default:
            continue;
      }
      if (priority <= min_priority) {
        min_priority = priority;
        split = i;
      }
    }
next:
    if (split == -1) {
      printf("Bad expression\n");
      return -1;
    }
    int left = eval(p, split - 1, tokens);
    int right = eval(split + 1, q, tokens);
    switch (tokens[split].type) {
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
        printf("Bad expression\n");
        return -1;
    }        
  }
}


word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }
  *success = true;
  return eval(0, nr_token-1, tokens);

  // TODO: Insert codes to evaluate the expression.
  //TODO();

  //return 0;
}

