#include<stdio.h>
#include<string.h>
int main()
{
 char a[80];int n;
 printf("请输入您的字符串:");
 scanf("%s",a);
 n=strlen(a);
 printf("字符串的长度为:%d",n);
 return 0;
}
