#include<stdio.h>
#define jag(x) {if((x%3==0)&&(x%7==0)) printf("此数可以被整除!\n"); else printf("此数不可被整除!\n");}
int main()
{
 int i,j,k;
 printf("请输入您的整数:");
 scanf("%d",&i);
 jag(i);
 return 0;
}
