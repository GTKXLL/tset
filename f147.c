#include<stdio.h>
#define jg(x) {if((x<='z'&&'a'<=x)||(x<='Z'&&x>='A')) printf("此文字为字母!\n"); else printf("此文字不为字母!\n");}
int main()
{
 char i,j,k;
 printf("请输入您的文字:");
 scanf("%c",&k);
 jg(k);
 return 0;
}
