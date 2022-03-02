#include<stdio.h>
int main(int argc,char *argv[])
{
 int i=0,j,k;
 char *p;
 p=argv[1];
 while((*p)!='\0')
  {
   while((*p)>='a'&&(*p)<='z'||(*p)>='A'&&(*p)<='Z')
     { i++;p++;}
  if((*p)!='\0')
   p++;
  }
 printf("%d\n",i);
 return 0;
}

