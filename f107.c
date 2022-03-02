#include<stdio.h>
int main()
{
 int sum=0,i,sum1=0,j,flag=0,k=0,*p;
 int c[4][5]={{60,59,58,57,56},{59,58,72,73,74},{80,85,86,87,88},{90,95,94,93,92}};
 for(j=0;j<4;j++)
  {p=c[j];
   for(i=0;i<5;i++,p++)
   {if((*p)<60)
       flag++;}
     if(flag>=2)
      {p=c[j];
       printf("NO.%d\n",j);
       for(k=0;k<5;k++,p++)
        { sum=sum+*p;
         printf("%3d",*p);}
         sum1=sum/5;
         printf("平均成绩:%3d",sum1);
         sum=0;sum1=0;flag=0;}}
  return 0;
}
