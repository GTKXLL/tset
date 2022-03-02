#include<stdio.h>
int main()
{
 int i;char c[20],*p;
 printf("请输入您想要的字符串:");
 scanf("%s",c);
 for(p=c;(*p)!='\0';p++)
  {
   printf("%c",*p);
   printf(" ");
  }
 return 0;
}
