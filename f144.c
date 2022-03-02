#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,k,n;
 char max;
 char a[10],b[2]={'a','b'};
 printf("请向a中输入字符串:");
 scanf("%s",a);
 n=strlen(a);
 max=a[0];
 for(i=0;i<n;i++)
  {
   if(a[i]>max)
     {
      max=a[i];k=i;
     }
  }
 for(i=n;i>k;i--)
  {
   a[i+2]=a[i];
  }
 a[k+1]=b[0];a[k+2]=b[1];
 printf("%s\n",a);
 return 0;
}
