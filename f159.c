#include<stdio.h>
#include<string.h>
int main()
{
 void copy(char *p1,int x,char *p2);
 char a[10],b[10]={};int m;
 char *p,*p1,*p2;
 printf("请输入您的字符串:");
 scanf("%s",a);
 p1=a;
 p2=b;
 printf("请输入您的m值:");
 scanf("%d",&m);
 copy(p1,m,p2);
 printf("复制后的数组为:%s",p2);
 return 0;
}

void copy(char *p1,int x,char *p2)
{
 int i,j,n;
 char *p;
 x=x-1;
 n=strlen(p1);
 for(i=x,j=0;i<n;i++,j++)
  *(p2+j)=*(p1+i);
}
