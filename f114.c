#include<stdio.h>
#include<string.h>
int main()
{
 char *ma1[5]={"qwc","qwa","qwb","qwe","qwf"};
 char *temp;
 char **p;
 int i,k,j,l;
 for(i=0;i<4;i++)
   for(k=0;k<4;k++)
     if(strcmp(ma1[k],ma1[k+1])>0)
        {temp=ma1[k];ma1[k]=ma1[k+1];ma1[k+1]=temp;}
 p=ma1;
 for(j=0;j<5;j++,p++)
  printf("%s\n",*p);
 return 0;
}
 
