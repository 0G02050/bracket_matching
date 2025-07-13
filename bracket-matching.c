#include <stdio.h>
#include <string.h>

int isValid(char *str) {
  char stack[100];
  int top = -1;
  
  for (int i = 0; str[i] != '\0'; i++) {
    char c = str[i];

    //左ならスタックに入る
    if (c == '(' || c == '[' || c == '{') {
      stack[++top] = c;
    } else if (c == ')' || c == ']' || c == '}') {
      if (top == -1) return 0;  //空スタック
     
      char topChar = stack[top--];

      if (        
        (c == ')' && topChar != '(') || 
        (c == ']' && topChar != '[') || 
        (c == '}' && topChar != '{') 
      ) {
        return 0;
      }      
    }
  }
  return top == -1;
}

int main() {
  char str[100];
  scanf(" %s",str);

  if (isValid(str)) {
    printf("true\n");
  } else {
    printf("false\n");
  }

  return 0;
}