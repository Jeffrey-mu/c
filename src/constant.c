#include <stdio.h>
int main()
{
  const int number = 212;
  printf("%d\n", number);
  const int enumber = 021;
  printf("%d\n", enumber);
  const int unumber = 123u;
  printf("%d\n", unumber);
  const int snumber = 0x4b;
  printf("%d\n", snumber);
  const int LENGTH = 10;
  const int WIDTH = 5;
  const char NEWLINE = '\n';
  int area;

  area = LENGTH * WIDTH;
  printf("value of area : %d", area);
  printf("%c", NEWLINE);
}
