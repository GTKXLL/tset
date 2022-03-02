#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{
 int num;
 struct student *next;
};

struct student *creat()
{
 struct student *head;
 struct student *p1,*p2;
 int n=0;
 head=NULL;
 p1=p2=(struct student *)malloc(LEN);;
 printf("请向第一个结点输入数据:");
 scanf("%d",&p1->num);
 while(p1->num!=0)
 {
  n++;
  if(n==1)
    head=p1;
  else
    p2=p1;
  p1=(struct student *)malloc(LEN);;
  printf("请向下一个结点输入数据:");
  scanf("%d",&p1->num);
  p2->next=p1;
 }
 p2->next=NULL;
 return head;
}

void print(struct student *head)
{
 struct student *p;
 p=head;
 do
  {
   printf("该学生的学号为:%d\n",p->num);
   p=p->next;
  }while(p!=NULL);
}

int main()
{
 struct student *creat();
 void print(struct student *head);
 struct student *head;
 head=creat();
 print(head);
 return 0;
}



 
