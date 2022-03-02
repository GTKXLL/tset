#include<stdio.h>
int main()
{
 int i,j,k;
 int a[2][3];
 for(i=0;i<2;i++)
  for(j=0;j<3;j++)
   {
    if(i==0)
      a[i][j]=2+2*j;
    if(i==1)
      a[i][j]=6+2*(j+1);
   }
 for(i=0;i<3;i++)
  for(j=0;j<2;j++)
   {
    printf("%d\n",a[j][i]);
   }
 return 0;
}
