#include<stdio.h>
#include<string.h>
int main()
{
 char name[10],temp,l;
 int i,j,k;
 printf("请向数组中输入数据:");
 gets(name);
 k=strlen(name);
 for(i=0;i<k-1;i++)
   for(j=0;j<k-1;j++)
     if(name[j+1]<name[j])
       { temp=name[j+1];name[j+1]=name[j];name[j]=temp;}
 printf("请输入您想插入的数字:");
 scanf("%c",&l);
 name[k]=l;
 for(i=0;i<k;i++)
   for(j=0;j<k;j++)
     if(name[j+1]<name[j])
       { temp=name[j+1];name[j+1]=name[j];name[j]=temp;}
 for(i=0;i<k+1;i++)
  printf("%c\n",name[i]);
 return 0;
}

