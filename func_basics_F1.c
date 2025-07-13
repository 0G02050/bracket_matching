#include <stdio.h>

// 定义了一个没有参数和返回值的函数
void sayHelllo() {
  printf("你好，世界！\n");
} 

// 定义了一个带参数但没有返回值的函数
void printSum(int a,int b) {
  int sum = a + b;
  printf("他们的和是：%d\n", sum);
}

// 定义了一个带参数和返回值的函数
int add(int x, int y) {
  int result = x + y;
  return result;  //返回计算结果
}

int main() {
  // 开始调用函数
  sayHelllo();

  printSum(5, 3);

  int num1 = 10;
  int num2 = 20;
  int total = add(num1, num2);
  printf("add 函数的返回值是：%d\n", total);

  return 0;
}