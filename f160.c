#include<stdio.h>
int main()
{
 void change(int x[],int a,int b);
 int i,j,k;
 int a[10]={2,4,6,8,10,12,14,16,18,20};
 printf("请输入指定位置的值:");
 scanf("%d",&k);
 printf("请输入n值:");
 scanf("%d",&j);
 change(a,j,k);
 for(i=0;i<10;i++)
  {printf("%d",a[i]); printf(" ");}
 printf("\n");
 return 0;
}

void change(int x[],int j,int b)
{
 int k,l,n,h,*p;
 p=x;
 k=10-j;
 l=j-1;
 b=b-1;
 for(n=0;n<l;n++)
  {h=*(p+b+n);*(p+b+n)=*(p+l+b-n);*(p+l-n+b)=h;}
}
