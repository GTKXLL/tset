#include<stdio.h>
#include<math.h>
#define S(a,b,c) (a+b+c)/2
#define area(x,a,b,c) sqrt(x*(x-a)*(x-b)*(x-c))
int main()
{
 int i,k,j,s,a;
 printf("请输入第一条边:");
 scanf("%d",&i);
 printf("请输入第二条边:");
 scanf("%d",&k);
 printf("请输入第三条边:");
 scanf("%d",&j);
 s=S(i,k,j);
 a=area(s,i,k,j);
 printf("s为:%d\n",s);
 printf("三角形面积为:%d\n",a);
 return 0;
}
