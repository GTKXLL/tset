#include<stdio.h>
int main()
{
 int sum=0,i,sum1=0,j,flag=0,k=0,*p,s=0,f;
 int c[4][5]={{60,59,58,57,56},{59,58,72,73,74},{86,86,86,87,88},{90,95,94,93,92}};
 for(j=0;j<4;j++)
  { p=c[j];
   for(i=0;i<5;i++,p++)
     {if(*p>85)
       { flag++;}
      sum=sum+*p;}
      sum1=sum/5;
     if(sum1>90||flag==5)
        { p=c[j];
          for(f=0;f<5;f++,p++)
           printf("%3d",*p);
         printf("NO.%d\n",j); }
     sum=0;sum1=0;flag=0;}
 return 0;
}
