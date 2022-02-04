#include <stdio.h>
int input(int *a, int *b)
{
  printf("Enter a,b value\n");
  scanf("%d %d",a,b);
}

int add(int a, int b, int *sum)
{
  *sum=a+b;
}
int output(int c)
{
  printf("sum is %d", c);
}

int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(z);
  return 0;
}
