#include<stdio.h>
#define swap(a,b) {int i;i=a;a=b;b=i;}
int main()
{
 int a[4],b[4];
 int i,j,k;
 for(i=0;i<4;i++)
  { printf("请输入您的数字1:");
    scanf("%d",&a[i]);}
 for(i=0;i<4;i++)
  { printf("请输入您的数字2:");
    scanf("%d",&b[i]);}
 for(i=0;i<4;i++)
   swap(a[i],b[i]);
 for(i=0;i<4;i++)
   printf("%d",a[i]);
 printf("\n");
 return 0;
}
