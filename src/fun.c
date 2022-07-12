#include <stdio.h>
// return_type function_name(parameter list)
// {
//   body of the function
// }
int max(int num, int num2)
{
  return num < num2 ? num2 : num;
}
int main()
{
  printf("%d\n", max(1, 2));
}
