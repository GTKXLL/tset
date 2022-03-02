#include<stdio.h>
struct people
{
 int num1;
 int num2;
 struct people *next;
}key[13];

int main()
{
 int name[10];
 int i,j=0,k=0;
 for(i=0;i<13;i++)
  { printf("请输入这个人的编号:");
    scanf("%d",&key[i].num1);
    printf("请输入这个人应报的号:");
    scanf("%d",&key[i].num2);
  }
 printf("\n");
 for(i=0;i<13;i++)
   if(key[i].num2!=3)
     {
      name[j]=key[i].num1;
      j++;
     }
 for(k=0;k<j;k++)
   printf("这个人的编号为:%d\n",name[k]);
 return 0;
}
