#include<stdio.h>
struct student
{
 int mid;
 int last;
};
int main()
{
 int aver; 
 struct student a;
 printf("请输入学生的期中成绩:");
 scanf("%d",&a.mid);
 printf("请输入学生的期末成绩:");
 scanf("%d",&a.last);
 aver=(a.mid+a.last)/2;
 printf("此生的平均成绩为:%d\n",aver);
 return 0;
}
