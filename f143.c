#include<stdio.h>
#include<string.h>
int main()
{
 int i,k,l;
 char a[20]={},b[10]={};
 printf("请向a输入您的字符串:");
 scanf("%s",a);
 printf("请向b输入您的字符串:");
 scanf("%s",b);
 k=strlen(b);
 l=strlen(a);
 if(k<6)
   {
    for(i=0;i<k;i++,l++)
      a[l]=b[i];
   }
 if(k>5)
   {
    for(i=0;i<5;i++,l++)
      a[l]=b[i];
   }
 printf("%s\n",a);
 return 0;
}
