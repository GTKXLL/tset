#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,k,l;
 int *temp;
 int c[10];
 for(l=0;l<10;l++)
 {printf("请输入您的数字:");
  scanf("%d",&c[l]);}
 int *name[10]={&c[0],&c[1],&c[2],&c[3],&c[4],&c[5],&c[6],&c[7],&c[8],&c[9]};
 printf("%d",*name[0]);
 return 0;
}
