#include<stdio.h>
struct month
{
 int year;
 int month;
 int day;
};
int main()
{
 int days(struct month *p);
 struct month key;
 int day,sum;
 scanf("%d %d %d",&key.year,&key.month,&key.day);
 day=days(&key);
 printf("总共有%d天",day);
 return 0;
}


int days(struct month *p)
{
 int leap,sum;
 switch((*p).month)
{
 case 1:sum=0;break;
 case 2:sum=31;break;
 case 3:sum=59;break;
 case 4:sum=90;break;
 case 5:sum=120;break;
 case 6:sum=151;break;
 case 7:sum=181;break;
 case 8:sum=212;break;
 case 9:sum=243;break;
 case 10:sum=273;break;
 case 11:sum=304;break;
 case 12:sum=334;break;
 default:printf("数据错误啦！");break;
}
 sum=sum+(*p).day;
 if((*p).year%400==0||((*p).year%4==0&&((*p).year%100)!=0))
  leap=1;
 else
  leap=0;
 if(leap==1&&(*p).month>2)
  sum++;
 return sum;
}
