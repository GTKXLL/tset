#include<stdio.h>
#include<string.h>
int main()
{
 int i,j,k,l,h; char *p,*temp,c[10][5];
 (p+1)=
 for(i=0;i<10;i++)
  {printf("请输入您的第%d个字符串:",i);
   scanf("%s",c[i]);}
 p=c[0];
 for(j=0;j<=8;j++)
  {for(k=0;k<=8;k++,p++)
     {if(strcmp(p[0],p[1]<0)
        {temp=p[0];p[0]=p[1];p[1]=temp;}}
    p[0]=c[0];}
 for(h=0;h<10;h++)
  {for(l=0;l<5;l++,p++)
  {printf("%s",*p);}
  p=c[0];}
 return 0;
}
