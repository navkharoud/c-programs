# include <Stdio.h>
/*
* Navkaran Singh
* 3119008
* Assignment 1
* Question 1
*/


int main(void)
{
  int i;
  float x;

  i = 40;
  x = 839.21f;

  printf("|%d|%5d|%-5d|%5.3d|\b", i, i, i, i);
  printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

  return 0;
}
