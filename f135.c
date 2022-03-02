#include<stdio.h>
int main()
{
 int i,j=0,k=0,h=0,g=0,v=0,c;
 for(i=0;i<50;i++)
 {
  printf("请输入您的数字:");
  scanf("%d",&c);
  switch(c)
    {case 0: j++;break;
     case 1: k++;break;
     case 2: h++;break;
     case 3: g++;break;
     case 4: v++;break;
     default: printf("您输入了错误的数字!\n");
    }
  if(c==-1) {printf("\n结束!\n");break;}
 }
 printf("'0'的个数为%d\n",j);
 printf("'1'的个数为%d\n",k);
 printf("'2'的个数为%d\n",h);
 printf("'3'的个数为%d\n",g);
 printf("'4'的个数为%d\n",v);
 return 0;
}
