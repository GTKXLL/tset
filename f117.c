#include<stdio.h>
int main()
{
 int a[3][3]={{1,1,1},{3,3,3},{2,2,2}};
 int c[3][3],*p;
 int j,i,k,l;
 for(j=0;j<3;j++)
   for(k=0;k<3;k++)
     c[k][j]=a[j][k];
 for(l=0;l<3;l++)
  {p=c[l];
  {for(i=0;i<3;i++,p++)
   printf("%3d",*p);}
   printf("\n");}
 return 0;
}

