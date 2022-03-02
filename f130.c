#include<stdio.h>
#include<string.h>
int main()
{
 int n,j;
 char name1[20];int name2[20];
 printf("请输入您的秘文:\n");
 scanf("%s",name1);
 n=strlen(name1);
 for(j=0;j<n;j++)
 {
  if(name1[j]<='z'&&name1[j]>='a')
    {name2[j]=122-name1[j]+97;}
  else if(name1[j]<='Z'&&name1[j]>='A')
    {name2[j]=90-name1[j]+65;}
  else
    {name2[j]=name1[j];}
 }
 printf("原文为:");
 for(j=0;j<n;j++)
  printf("%c",name2[j]);
 printf("秘文为:");
 printf("%s",name1);
 printf("\n");
 return 0;
}
