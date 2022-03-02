#include<stdio.h>
int main()
{
 int m,n,j,k,i;char *p;
 printf("请输入您的字符串个数:");
 scanf("%d",&n);
 char a[n];
 printf("请输入您的字符串:");
 scanf("%s",a);
 p=a;
 printf("请输入m的值:");
 scanf("%d",&m);
 char c[n-m];
 for(j=0;j<=n-m;j++,p++)
 {c[j]=*(p+m-1);}
 for(k=0;k<=n-m;k++)
 {printf("%c",c[k]);}
 return 0;
}
 
