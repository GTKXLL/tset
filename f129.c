#include<stdio.h>
#include<string.h>
int main()
{
 int k,i,j,l;
 char name[10],temp;
 printf("请输入您的数据:");
 scanf("%s",name);
 k=strlen(name);
 for(i=0;i<k-1;i++)
   for(j=0;j<k-1;j++)
     if(name[j]>name[j+1])
        {temp=name[j];name[j]=name[j+1];name[j+1]=temp;}
 for(i=0;i<k;i++)
  printf("%c",name[i]);
 return 0;
}
