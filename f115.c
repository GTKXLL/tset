#include<stdio.h>
#include<string.h>
int main()
{
 void list1(char *v[10]);
 char a[10][5];
 char c[5];
 char *name[10];
 int i,j,k,l;
 for(i=0;i<10;i++)
   {printf("请输入您的字符串:");
    scanf("%s",a[i]);
   }
 for(j=0;j<10;j++)
  name[j]=a[j];
 list1(name);
 for(l=0;l<10;l++)
  printf("%s\n",a[l]);
 return 0;
}

void list1(char *v[10])
{
 int j,k;
 char c[5];
 for(j=0;j<9;j++)
   for(k=0;k<9;k++)
     if(strcmp(v[k],v[k+1])>0)
        {strcpy(c,v[k]);strcpy(v[k],v[k+1]);strcpy(v[k+1],c);}
}
