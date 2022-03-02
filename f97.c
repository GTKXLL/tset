#include<stdio.h>
int main()
{
 char a[10],temp;
 int i,j,k,n;
 for(i=0;i<=9;i++)
 scanf("%c",&a[i]);
  for(j=0;j<=8;j++)
    for(k=0;k<=8;k++)
      if(a[k]>a[k+1])
        {temp=a[k];a[k]=a[k+1];a[k+1]=temp;}
   for(n=0;n<=9;n++)
     printf("%c",a[n]);
  return 0;
}


