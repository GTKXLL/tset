#include<stdio.h>
#include<string.h>
int main()
{
 int i,n,m,k;
 char name1[20],name2[20];
 printf("请向第一个数组输入数据:");
 scanf("%s",name1);
 printf("请向第二个数组输入数据:");
 scanf("%s",name2);
 n=strlen(name1);
 m=strlen(name2);
 for(i=n,k=0;i<n+m&&k<m;i++,k++)
 {name1[i]=name2[k];}
 printf("数组数据为:\n");
 printf("%s\n",name1);
 return 0;
}
