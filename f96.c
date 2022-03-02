#include<stdio.h>
int main()
{
 char c;
 void action1,action2;
 int a[7],i;
 printf("您希望采用的模式:1.逆式2.顺式\n");
 switch(c)
 {   case'1':action1;break;
     case'2':action2;break;
     default:printf("您输入了错误的数字,请重新输入。");
 }
 for(i=0;i<=6;i++)
   printf("%d",a[i]);
 return 0;
}


void action1
{
 int temp;
 printf("请输入您的六字数列:");
 for(j=0;j<=6;j++)
  scanf("%d",&a[j]);
 for(k=0;k<=5;k++)
  for(f=0;f<=5;f++)
   if(a[f]<a[f+1])
    {temp=a[f];a[f]=a[f+1];a[f+1]=temp;}
 for(p=0;p<=6;p++)
 return a[p];
}



void action2
{
 printf("请输入您的六字数列:");
 int temp;
 for(j=0;j<=6;j++)
  scanf("%d",&a[j]);
 for(k=0;k<=5;k++)
  for(f=0;f<=5;f++)
   if(a[f]<a[f+1])
    {temp=a[f];a[f]=a[f+1];a[f+1]=temp;}
 for(p=0;p<=6;p++)
 return a[p];
}

