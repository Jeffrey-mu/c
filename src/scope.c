#include <stdio.h>
// scope
/* 全局变量声明 */
int g;
int main()
{
  /* 局部变量声明 */
  int a, b;
  int c;

  /* 实际初始化 */
  a = 10;
  b = 20;
  c = a + b;

  printf("value of a = %d, b = %d and c = %d\n", a, b, c);

  return 0;
  //   全局变量与局部变量在内存中的区别：
  //   全局变量保存在内存的全局存储区中，占用静态的存储单元；
  //   局部变量保存在栈中，只有在所在函数被调用时才动态地为变量分配存储单元。
}
