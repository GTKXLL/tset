#include<stdio.h>
#include<math.h>
int main()
{
  int i,j,m,k;
  for(i=2;i<=100;i++)
  {k=sqrt(i); for(j=2;j<=k;j++)
     if(i%j==0)break;
      if(j>=k+1)
      { 
          printf("%5d",i);
       }}
   return 0;
}
