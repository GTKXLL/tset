#include<stdio.h>
int main()
{
 int y,f,j,n,m,i,k,*p;
 printf("请输入您想输入的字数个数:");
 scanf("%d",&n);
 printf("请输入您想往后提的数字个数:");
 scanf("%d",&m);
 int a[n];
 printf("请输入您的数字:");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);}
 for(y=0;y<n;y++)
 printf("%d",a[y]);
 for(j=n-m;j<n;j++)
 { p=(a+j);
   printf("%d",*(p));
   p++;
 }
 for(k=0;k<n-m;k++)
 { p=(a+k);
   printf("%d",*(p));
   p++;
 }
 return 0;
}
