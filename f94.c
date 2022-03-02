#include<stdio.h>
#include<string.h>
int main()
{
 char *A,*B,*C,str1[80],str2[80],str3[80];
 A=str1;
 B=str2;
 C=str3;
 void swap(char *p1,char *p2);
 gets(str1);
 gets(str2);
 gets(str3);
 if(strcmp(str1,str2)<0)
 swap(A,B);
 if(strcmp(str2,str3)<0)
 swap(B,C);
 if(strcmp(str1,str3)<0)
 swap(A,C);
 printf("%s\n%s\n%s\n",A,B,C);
 return 0;
}


void swap(char *p1,char *p2)
{
 int temp;
 temp=*p1;
 *p1=*p2;
 *p2=temp;
}




