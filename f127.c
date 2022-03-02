#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{
 int year;
 int num;
 struct student *next;
};

int k=0;int n;
struct student *creat1(void)
{
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
   k=k+1;
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

struct student *creat2(void)
{
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

struct student *delab(struct student *head1,struct student *head2)
{
 struct student *p1,*p2,*p3;
 p1=head1;
 int i,j;
 for(i=0;i<n;i++)
  {p2=head2;p3=head2;
      for(j=0;j<k&&(p2!=NULL);k++)
       {
          if(p2==head2)
              {if(p1->num==p2->num)
                 {head2=head2->next;
                  p3=head2;
                  p2=p2->next;}
               else
                 p2=p2->next;
              }  
           else if(p2!=head2)
                 { if(p1->num==p2->num)
                     {p3->next=p2->next;
                      p2=p2->next;}
                  else
                     {p3=p2;
                      p2=p2->next;}
                 }
        }
   p1=p1->next;
   if(head2==NULL)
      break;
   }
 return head2;
}

void print(struct student *head)
{
 struct student *p3;
 p3=head;
 if(p3==NULL)
  printf("此链表为空!\n");
 while(p3!=NULL)
 {
   printf("学生的学号为:");
   printf("%d\n",p3->num);
   printf("学生的分数为:");
   printf("%d\n",p3->year);
   printf("\n");
   p3=p3->next;
 }
}


int main()
{
 void print(struct student *head);
 struct student *delab(struct student *head1,struct student *head2);
 struct student *creat2(void);
 struct student *creat1(void);
 struct student *head1,*head2;
 printf("请输入a链表的数据:\n");
 head1=creat1();
 printf("\n");
 printf("请输入b链表的数据:\n");
 head2=creat2();
 head1=delab(head2,head1);
 print(head1);
 return 0;
}

