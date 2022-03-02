#include<stdio.h>
#define swap(a,b) a/b
int main()
{
 int i,j,k;
 printf("请输入您的数字1:\n");
 scanf("%d",&i);
 printf("请输入您的数字2:\n");
 scanf("%d",&j);
 k=swap(i,j);
 printf("两数的商为:%d\n",k);
 return 0;
}

