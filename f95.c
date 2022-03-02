#include<stdio.h>
int main()
{
 int a[10][11];
 int i,j,k,h;
 for(h=2;h<=10;h++)
  a[0][h]=0;
  a[0][0]=0;
  a[0][1]=1;
 for(k=0;k<=9;k++)
  a[k][0]=0;
 for(j=1;j<=9;j++)
  for(i=1;i<=10;i++)
   a[j][i]=a[j-1][i-1]+a[j-1][i];
 for(j=0;j<=9;j++)
  { for(i=0;i<=10;i++)
    { printf("%6d",a[j][i]);}
   printf("\n");
  }
 return 0;
}
