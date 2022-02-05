#include<stdio.h>

float input()
{
  float q;
  printf("Enter the number for sqrt\n");
  scanf("%f",&q);
  return q;
}

float my_sqrt(float n)
{
  float sqrt = 1,i;
  i=1;
  for(i=1;i<n;++i){
    if(i*i==n){
      return i;
    }
    sqrt=i;
  }
  return sqrt;
}

void output(float n,float sqrt_result)
{
  printf("the sqrt of the given number %f is %f",n,sqrt_result);
}

int main()
{
  float a,sqrt;
  a=input();
  sqrt=my_sqrt(a);
  output(a,sqrt);
  return 0;
}