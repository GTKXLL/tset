#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{
 char data[5];
 struct student *next;
};
int n;
struct student *creat()
{
 struct student *head;
 struct student *p1,*p2;
 n=0;
 p1=p2=(struct student* )malloc(LEN);
 printf("请输入您的数据:");
 scanf("%s",p1->data);
 head=NULL;
 while(*(p1->data)!='0')
  { n=n+1;
    if(n==1)
    head=p1;
    else
    p2->next=p1;
    p2=p1;
    p1=(struct student* )malloc(LEN);
    printf("请输入您的数据:");
    scanf("%s",p1->data);
  }
 p2->next=NULL;
 return head;
}
void print(struct student *p)
{
 if(p!=NULL)
   do{ printf("%s\n",p->data);
        p=p->next;
     }while(p!=NULL);
}
struct student *change(struct student *head)
{
 struct student *p1,*p2;
 int i=0;
 p1=p2=head;
 p1=p1->next;
 p2=p2->next;i++;
 while(p1->next!=NULL)
 {
   p1=p1->next;
   p1->next=p2;
   if(i==1)
    {p2->next=NULL;i++;}
   p2=p1;
 }
 head->next=p1;
 return head;
}
int main()
{
 struct student *head,*p1;
 head=creat();
 p1=head;
 head=change(p1);
 print(head);
 return 0;
}
