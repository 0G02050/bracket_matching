#include <stdio.h>

int main() {
  int num = 19;
  int *ptr;

  ptr = &num; // 把num的地址赋给指针ptr

  printf("变量 num 的值是: %d\n", num);
  printf("变量 num 的地址是: %p\n", &num);
  printf("指针 ptr 存储的地址是: %p\n", ptr); // 指针变量本身存储的就是地址
  printf("指针 ptr 指向的值是: %d\n",*ptr); // 解引用操作，访问 ptr 指向的地址中的值
  // 使用取地址运算符 & 来获取一个变量的内存地址
  // 使用*运算符来访问指针所指向的内存地址中的值
  // 通过指针改变变量的值
  *ptr = 20;
  printf("通过指针改变后，变量 num 的值是: %d\n", num);

  return 0;
}