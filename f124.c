#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{
 int year;
 int num;
 struct student *next;
};

struct student *creat(void)
{
 int n;
 struct student *head;
 struct student *p1,*p2;
 n=0;
 p1=p2=(struct student *)malloc(LEN);
 printf("请输入学生的学号:");
 scanf("%d",&p1->num);
 printf("请输入学生的年龄:");
 scanf("%d",&p1->year);
 head=NULL;
 while(p1->num!=0)
  {
   n=n+1;
   if(n==1)head=p1;
   else p2->next=p1;
   p2=p1;
  p1=(struct student *)malloc(LEN);
  printf("请输入学生的学号:");
  scanf("%d",&p1->num); 
  printf("请输入学生的年龄:");
  scanf("%d",&p1->year);
  }
 p2->next=NULL;
 return(head);
}

struct student *del(struct student *head)
{
 int i=0,j=0,k=0;
 struct student *p1,*p2,*p3;
 p1=head;
 printf("请输入您想删除的年龄:");
 scanf("%d",&i);
  while(head->year==i)
  {head=head->next;
   p1=p1->next;}
   while(p1!=NULL)
 {
   p2=p1;
   p1=p1->next;
   while(p1!=NULL)
    { if(p1->year==i)
     {
      p2->next=p1->next;
      p1=p1->next;
     }
     else if(p1->year!=i)
     break;
    }
 }
 p3=head;
 while(p3!=NULL)
 {
   printf("学生的学号为:");
   printf("%d\n",p3->num);
   printf("学生的年龄为:");
   printf("%d\n",p3->year);
   printf("\n");
   p3=p3->next;
 }
 return head;
}



int main()
{
 struct student *del(struct student *head);
 struct student *creat(void);
 struct student *head;
 head=creat();
 head=del(head);
 return 0;
}
