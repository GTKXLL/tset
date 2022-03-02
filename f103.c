#include<stdio.h>
#include<string.h>
int main()
{
 char a[80];int i,char1=0,char2=0,blank=0,number=0,other=0,n;char *p;
 gets(a);
 puts(a);
 printf("\n");
 n=strlen(a);
 p=a;
 for(i=0;i<n;i++,p++)
 {if(*p>='A'&&*p<='Z')
   char1++;
  else if(*p>='a'&&*p<='z')
   char2++;
  else if(*p==' ')
   blank++;
  else if(*p>='0'&&*p<='9')
   number++;
  else
   other++;}
 printf("大写字母数量为:%d,小写字母数量为:%d,空格为:%d,数字个数为:%d,其他为:%d",char1,char2,blank,number,other);
 return 0;
}
