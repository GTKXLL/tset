#include<stdio.h>
#include<string.h>
int main()
{
 void insert(char a[],int x);
 char a[10];int x;
 printf("请输入您的字符串:");
 scanf("%s",a);
 x=strlen(a);
 insert(a,x);
 return 0;
}

void insert(char a[],int x)
{
 char b[20],*p;
 int i,j=0;
 for(i=0;i<x;i++,j++)
 {
  b[j]=a[i];
  if(i!=x-1)
   b[++j]=' ';
 }
 b[j]='\0';
 p=b;
 printf("修改后的字符串的为:%s",p);
}
