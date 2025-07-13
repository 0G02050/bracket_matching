#include <stdio.h>

// 指针与函数结合（传址调用）
// 这是指针真正发挥威力的地方。在C语言中，函数参数默认是值传递（pass by
// value）。
// 这意味着当你将一个变量作为参数传递给函数时，函数接收到的是该变量的一个副本。
// 函数对这个副本的任何修改都不会影响到原始变量。
// 但如果你想在函数内部修改主函数中的原始变量，
// 就需要使用指针作为函数参数，
// 这种方式叫做传址调用（pass by reference）。

// 错误的方式：值传递，但是无法交换原始变量
void swap_wrong(int a, int b) {
  int temp = a;
  a = b;
  b = temp;
  printf("在函数内部(swap_wrong) - a: %d, b: %d\n", a, b);
}
// 正确的方式：地址调用，使用指针
void swap_correct(int *ptrA, int *ptrB) {
  int temp = *ptrA; // 获取 ptrA 指向的值
  *ptrA = *ptrB;    // 将 ptrB 指向的值赋给 ptrA 指向的位置
  *ptrB = temp;     // 将 temp 的值赋给 ptrB 指向的位置
  printf("在函数内部(swap_correct) - *ptrA: %d, *ptrB: %d\n", *ptrA, *ptrB);
}

int main() {
  int x = 10;
  int y = 20;

  printf("交换前 - x: %d,y: %d\n", x, y);

  // 错误的交换方式
  swap_wrong(x, y);
  printf("使用 swap_wrong 后 - x: %d, y: %d (注意：值没有改变！)\n", x, y);

  printf("\n");

  int a = 10;
  int b = 20;

  printf("交换前 - a: %d, b: %d\n", a, b);
  // 使用正确的方式交换，传入变量的地址
  swap_correct(&a, &b);
  printf("使用 swap_correct 后 - a: %d, b: %d (注意：值已经改变！)\n", a, b);

  return 0;
}