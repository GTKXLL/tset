#include<stdio.h>
int main()
{
 int i,j;
 int a[10],b[9];
 for(i=0;i<10;i++)
 {printf("请输入您的数字:");
  scanf("%d",&a[i]);}
 for(i=0;i<9;i++)
  {b[i]=a[i]/a[i+1];
   printf("%d\n",b[i]);}
 return 0;
}
 
