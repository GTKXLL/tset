#include<stdio.h>
int main()
{
 float p(int n,float x);
 int n;float x;float p1;
 printf("请输入您的阶数:");
 scanf("%d",&n);
 printf("请输入您的x:");
 scanf("%f",&x);
 p1=p(n,x);
 printf("结果为:%f",p1);
 return 0;
}

float p(int n,float x)
{
 float p1;
 if(n==0)
  return 1;
 if(n==1)
  return x;
 if(n>0)
  p1=((2*n-1)*x*p(n-1,x)-(n-1)*p(n-2,x))/n;
  return p1;
}
