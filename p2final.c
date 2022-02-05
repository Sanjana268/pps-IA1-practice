#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int compare(int a, int b, int c)
{
  if ((a>b)&&(a>c))
  return a;
  else
  if((b>a)&&(b>c))
  return b;
  else
  return c;
}
int output(int big)
{
  printf("%d is big",big);
}
int main()
{
  int x,y,z,biggest;
  x=input();
  y=input();
  z=input();
  biggest= compare(x,y,z);
  output(biggest);
  return 0;
}