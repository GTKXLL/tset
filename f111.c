#include<stdio.h>
int main()
{
 char a[10],c[10],*p1,*p2;int n;
 int strcmp1(char *p3,char *p4);
 printf("请输入A的字符串:");
 scanf("%s",a);
 printf("请输入C的字符串:");
 scanf("%s",c);
 p1=a;
 p2=c;
 n=strcmp1(p1,p2);
 printf("%d",n);
 return 0;
}

int strcmp1(char *p3,char *p4)
{
 int strcmp3(char *p3,char *p4);
 int k,i=0;
 do
   {
    if(*p3==*p4)
        {
          i++;
          p3++;
          p4++;
          k=0;
        }
     else
       {k=strcmp3(p3,p4);break;}
    }while(i<10);
 return k;
}

int strcmp3(char *p3,char *p4)
{
 int j;
 j=((*p3)-(*p4));
 return j;
}
