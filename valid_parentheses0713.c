#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX 1000

// 栈の実装（Stack implementation）
char stack[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    }
}

char pop() {
    if (!isEmpty()) {
        return stack[top--];
    }
    return '\0'; // 空の時
}

char peek() {
    if (!isEmpty()) {
        return stack[top];
    }
    return '\0';
}

// 判定関数
bool isValid(const char* s) {
    top = -1; // 栈初始化
    for (int i = 0; i < strlen(s); i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            push(c);
        } else {
            char t = pop();
            if ((c == ')' && t != '(') ||
                (c == ']' && t != '[') ||
                (c == '}' && t != '{')) {
                return false;
            }
        }
    }
    return isEmpty(); // 最后栈必须为空才合法
}

// 测试主函数
int main() {
    char input[100];
    printf("入力文字列を入力してください: ");
    scanf("%s", input);

    if (isValid(input)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
