#include<stdio.h>

int input_n()
{
  int n;
  printf("Enter the value of number\n");
  scanf("%d",&n);
  return n;
  
}
int sum_n(int n)
{
  int sum=0;
  
  for(int i=0;i<=n; i++)
  {
    sum +=i;
  }
  return sum;
}
void output(int n,int sum)
{
  printf("The sum of first %d numbers is %d\n",n,sum);

}


int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;


}