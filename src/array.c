#include <stdio.h>
int main()
{
  // type arrayName [ arraySize ];
  // 这叫做一维数组。arraySize 必须是一个大于零的整数常量，type 可以是任意有效的 C 数据类型。例如，要声明一个类型为 double 的包含 5 个元素的数组 balance，声明语句如下：
  // double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
  //   大括号 {}
  //   之间的值的数目不能大于我们在数组声明时在方括号[] 中指定的元素数目。
  //   如果您省略掉了数组的大小，数组的大小则为初始化时元素的个数。因此，如果：

  // double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0};
  // 您将创建一个数组，它与前一个实例中所创建的数组是完全相同的。下面是一个为数组中某个元素赋值的实例：
  // balance[4] = 50.0;
  int n[10]; /* n 是一个包含 10 个整数的数组 */
  int i, j;

  /* 初始化数组元素 */
  for (i = 0; i < 10; i++)
  {
    n[i] = i + 100; /* 设置元素 i 为 i + 100 */
  }

  /* 输出数组中每个元素的值 */
  for (j = 0; j < 10; j++)
  {
    printf("Element[%d] = %d\n", j, n[j]);
  }

  return 0;
}
