#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{
 int data;
 struct student *next;
};
int n;
struct student *creat()
{
 struct student *head;
 struct student *p1,*p2;
 n=0;
 p1=p2=(struct student *)malloc(LEN);
 printf("请输入您的数据:");
 scanf("%d",&p1->data);
 head=NULL;
 while(p1->data!=-1)
  { n=n+1;
    if(n==1)
    head=p1;
    else
    p2->next=p1;
    p2=p1;
    p1=(struct student *)malloc(LEN);
    printf("请输入您的数据:");
    scanf("%d",&p1->data);
  }
 p2->next=NULL;
 return head;
}
void print(struct student *p)
{
 if(p!=NULL)
   do{ printf("%d\n",p->data);
        p=p->next;
     }while(p!=NULL);
}
int main()
{
 struct student *head;
 head=creat();
 print(head);
 return 0;
}
