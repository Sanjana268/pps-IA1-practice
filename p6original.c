#include <stdio.h>
void input(char *s1, char *s2)
{
  printf("Enter first atring\n");
  scanf("%s",s1);
  printf("Enter second string\n");
  scanf("%s",s2);

}

int compare(char *s1,char * s2)
{
  for(int i=0;s1[i]==s2[i]&& s1[i]!='\0';i++);
  

}

void output(char *s1, char *s2, int r)
{
  if (r>0){
    printf("%s is greater than %s\n",s1,s2);

  }
  else if (r<0){
    printf("%s is greater than %s\n",s1,s2);
  

  }

  else {
    printf("%s is equal to %s\n",s1,s2);
  }
}
int main()
{
  char s1[100], s2[100];
  input(s1,s2);
  printf("%s %s",s1,s2);
  return 0;
} 