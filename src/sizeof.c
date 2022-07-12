#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
  // 为了得到某个类型或某个变量在特定平台上的准确大小，您可以使用 sizeof 运算符。表达式 sizeof(type) 得到对象或类型的存储字节大小。下面的实例演示了获取 type 类型的大小：

  // printf("char 存储大小 : %lu \n", sizeof(char));
  // printf("unsigned char 存储大小 : %lu \n", sizeof(unsigned char));

  printf("float 存储最大字节数 : %lu \n", sizeof(float));
  printf("float 最小值: %E\n", FLT_MIN);
  printf("float 最大值: %E\n", FLT_MAX);
  printf("精度值: %d\n", FLT_DIG);
  // 规定符
  // %d 十进制有符号整数
  // %u 十进制无符号整数
  // %f 浮点数
  // %s 字符串
  // %c 单个字符
  // %p 指针的值
  // %e 指数形式的浮点数
  // %x, %X 无符号以十六进制表示的整数
  // %o 无符号以八进制表示的整数
  // %g 把输出的值按照 %e 或者 %f 类型中输出长度较小的方式输出
  // %p 输出地址符
  // %lu 32位无符号整数
  // %llu 64位无符号整数
  return 0;
}
