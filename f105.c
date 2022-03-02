#include<stdio.h>
int main()
{
 char c[12],*p;int i,j;
 printf("请输入您的字符:");
  scanf("%s",c);
 p=&c[10];
 for(j=11;j>0;j--,p--)
  printf("%c",*p);
 return 0;
}
