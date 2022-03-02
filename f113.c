#include<stdio.h>
#include<string.h>
int main()
{
 void sort1(int *name1[]);
 int k,l;
 int c[10];
 for(l=0;l<10;l++)
 {printf("请输入您的数字:");
  scanf("%d",&c[l]);}
 int *name[10]={&c[0],&c[1],&c[2],&c[3],&c[4],&c[5],&c[6],&c[7],&c[8],&c[9]};
 int **p;
 sort1(name);
 p=name;
 for(k=0;k<10;k++,p++)
  printf("%d\n",**p);
 return 0;
}


void sort1(int *name1[])
{
 int i,j;
 int *temp;
 for(i=0;i<9;i++)
  for(j=0;j<9;j++)
   if(*name1[j]<*name1[j+1])
    {temp=name1[j];name1[j]=name1[j+1];name1[j+1]=temp;}
}

