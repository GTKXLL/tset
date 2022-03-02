#include<stdio.h>
int main()
{
 int i;
 char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
 scanf("%d",&i);
 i=i-1;
 if(i>11)
 printf("这是错误的数字！");
 else
 printf("月份为:%s",month[i]);
 return 0;
}
