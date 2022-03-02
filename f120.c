#include<stdio.h>
struct student
{
 int num;
 char name[7];
 int score[3];
 int ave;
}key[10];

int main()
{
 struct student max(struct student key1[]);
 void print(struct student key1[]);
 void input(struct student key1[]);
 void print1(struct student key);
 input(key);
 print(key);
 print1(max(key));
 return 0;
}

struct student max(struct student key1[])
{
 int i,j=0;
 int sum[10];
 struct student *p;
 p=key1;
 for(i=0;i<10;i++,p++)
  {sum[i]=(*p).score[0]+(*p).score[1]+(*p).score[2];
  (*p).ave=sum[i]/3;
   if(key1[i].ave>key1[j].ave)
   j=i;}
 return key1[j];
}


void input(struct student key1[])
{
 int i;
 struct student *p;
 p=key1;
 for(i=0;i<10;i++,p++)
  {printf("请输入学生的数据:\n");
   scanf("%d",&(*p).num);
   scanf("%s",(*p).name);
   scanf("%d %d %d",&(*p).score[0],&(*p).score[1],&(*p).score[2]);
  }
}
void print(struct student key1[])
{
 int i,sum=0,ave;
 struct student *p;
 p=key1;
 for(i=0;i<10;i++,p++)
  sum=sum+(*p).score[0]+(*p).score[1]+(*p).score[2];
 ave=sum/30;
 printf("三科成绩的平均分是:%d\n",ave);
 printf("\n");
}

void print1(struct student key1)
{
    {printf("本学生的学号为%d\n本学生的姓名为%s\n本学生的成绩为:%d,%d,%d\n本学生的平均成绩为%d\n",key1.num,key1.name,key1.score[0],key1.score[1],key1.score[2],key1.ave);
     printf("\n");}
}

