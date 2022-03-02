#include<stdio.h>
int main()
{
 double a=5.0,p;int n=5;
 double mypow(double x,int y);
 p=mypow(a,n);
 printf("%f\n",p);
 return 0;
}

double mypow(double x,int y)
{
 double a=x;int i;
 for(i=0;i<y-1;i++)
    x=a*x;
 return x;
}
