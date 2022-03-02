#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{
 int year;
 int num;
 struct student *next;
};

int n,m=0;
struct student *creat(void)
{
 struct student *head;
 struct student *p1,*p2;
 n=0;
 p1=p2=(struct student *)malloc(LEN);
 printf("请输入学生的学号:");
 scanf("%d",&p1->num); 
 printf("请输入学生的分数:");
 scanf("%d",&p1->year);
 head=NULL;
 while(p1->num!=0)
  {
   m=m+1;
   n=n+1;
   if(n==1)head=p1;
   else p2->next=p1;
   p2=p1;
  p1=(struct student *)malloc(LEN);
  printf("请输入学生的学号:");
  scanf("%d",&p1->num); 
  printf("请输入学生的分数:");
  scanf("%d",&p1->year);
  }
 p2->next=NULL;
 return(head);
}

struct student *mg(struct student *head1,struct student *head2)
{
 struct student *p1,*p2,*p3;
 struct student *n1,*n2;
 int i,j,k;
 k=m-1;
 n1=head1;
 while(n1!=NULL)
  {n2=n1;
  n1=n1->next;}
 n2->next=head2;
 for(i=0;i<k;i++)
  {p1=head1;p2=head1;
   p1=p1->next;
     for(j=0;j<k;j++)
        {
         if(p2==head1)
           {if(p1->num>p2->num)
             {head1=head1->next;
              p2->next=p1->next;
              p1->next=p2;
              p1=p2;
             }
          else
             { p2=p2->next;}
            p1=p1->next;
            p3=head1;
           }
      else if(p2!=head1)
         {
          if(p1->num>p2->num)
            {
             p3->next=p1;
             p2->next=p1->next;
             p1->next=p2;
             p1=p2;
             p1=p1->next;
            }
           else
           { p2=p1;
            p1=p1->next;
           }
          p3=p3->next;
         }
      }
   }
 return head1;
}

void print(struct student *head1)
{
 struct student *p3;
 p3=head1;
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
 void print(struct student *head1);
 struct student *mg(struct student *head1,struct student *head2);
 struct student *creat(void);
 struct student *head1,*head2;
 printf("请输入A链表的数据:\n");
 head1=creat();
 printf("\n");
 printf("请输入B链表的数据:\n");
 head2=creat();
 head1=mg(head1,head2);
 print(head1);
 return 0;
}
