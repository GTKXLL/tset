#include<stdio.h>
int main()
{
 int sum=0,i,sum1=0,*p;
 int c[4][5]={{60,59,58,57,56},{70,71,72,73,74},{80,85,86,87,88},{90,95,94,93,92}};
 p=*c;
 for(i=0;i<19;i++,p++)
  if(i==0||i==5||i==10||i==15)
  sum=sum+*p;
 sum1=sum/4;
 printf("平均数为%d",sum1);
 return 0;
}
