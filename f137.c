#include<stdio.h>
int main()
{
 int i,k,l;
 int a[30],b[10];
 int sum=0,ave;
 for(i=0,k=1,l=0;i<=29;i++,k++)
 {
  a[i]=2+2*i;
  sum=a[i]+sum;
  if(k%5==0)
  {
   ave=sum/5;
   b[l]=ave;
   l++;
   sum=0;
  }
 }
 for(i=0;i<6;i++)
  printf("%d\n",b[i]);
 return 0;
}

