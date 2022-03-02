#include<stdio.h>
int main()
{
 double i,j,C,S,V;
 printf("请输入圆的半径:");
 scanf("%lf",&i);printf("\n");
 printf("请输入圆的高:");
 scanf("%lf",&j);printf("\n");
 C=2*i*3.14;
 S=i*i*3.14;
 V=S*j;
 printf("圆的周长为:");
 printf("%5.2f\n",C);
 printf("圆的面积为:");
 printf("%5.2f\n",S);
 printf("圆的体积为:");
 printf("%5.2f\n",V);
 return 0;
}
