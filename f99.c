#include<stdio.h>
int main()
{
 char A[10],a[10];
 int j,l,n=0,m;
 for(l=0;l<=10;l++)
 scanf("%c",&a[l]);
 for(j=0;j<=10;j++)
  { if(a[j]=='A')
       {A[n]=a[j];n++;continue;}
     else if(a[j]=='E')
       {A[n]=a[j];n++;continue;}
     else if(a[j]=='I') 
       {A[n]=a[j];n++;continue;}
     else if(a[j]=='O')
       {A[n]=a[j];n++;continue;}
     else if(a[j]=='U')
       {A[n]=a[j];n++;continue;}
  }
 for(m=0;m<=n;m++)
   printf("%c",A[m]);
 return 0;
}
