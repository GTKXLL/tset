#include<stdio.h>
#include<string.h>
int main()
{
 char c[40],a[40],*p;int n,i,j,l,k,m=0;
 gets(c);
 p=c;
 n=strlen(c);
 for(i=0;i<n;i++,p++)
  for(k=0;k<n;k++)
   {if(*p>='0'&&*p<='9')
    {a[j]=a[j]+*p;                 //这里是想实现字符相连
     p++;}
   else 
     j++;
    }
 l=strlen(a);
 printf("总共有%d个数\n",l);
 for(m=0;m<l;m++)
 printf("%3d",a[m]);
 return 0;
}
