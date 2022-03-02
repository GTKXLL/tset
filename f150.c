#include<stdio.h>
int main()
{
 void isprime(int x);
 int x;
 printf("请输入您的数字:");
 scanf("%d",&x);
 isprime(x);
 return 0;
}

void isprime(int x)
{
 int i,j;
 i=x;
 for(j=2;j<i;j++)
  { if(i%j==0)
      { printf("0\n");break;}
  }
 if(j==i)
  printf("-1\n");
}
