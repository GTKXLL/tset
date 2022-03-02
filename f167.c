#include<stdio.h>
struct student
{
 int no;
 int mid;
 int last;
}a[3];
int main()
{
 int j,i,k;int aver;
 for(i=0;i<3;i++)
   {printf("请输入学生的学号:\n");
    scanf("%d",&a[i].no);
    printf("请输入学生的期中成绩:\n");
    scanf("%d",&a[i].mid);
    printf("请输入学生的期末成绩:\n");
    scanf("%d",&a[i].last);
   }
 for(i=0;i<3;i++)
   {
    aver=(a[i].mid+a[i].last)/2;
    printf("学号为%d学生的平均成绩为%d\n",i,aver);
    printf("期中成绩为%d,期末成绩为%d\n",a[i].mid,a[i].last);
   }
 return 0;
}
