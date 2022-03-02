#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
 {
  int info;
  struct student *next;
  struct student *pre;
 };
int n;
struct student *creat()
{
 struct student *head;
 struct student *p1,*p2,*p3,*p4;
 n=0;
 head=NULL;
 p1=p2=p3=p4=(struct student*)malloc(LEN);
 printf("请输入您的数据:");
 scanf("%d",&p1->info);
 p4=NULL;
 while(p1->info!=-1)
  {
   n=n+1;
   if(n==1)
     head=p1;
   else 
     p2->next=p1;
     p3=p2=p1;
    p1=(struct student*)malloc(LEN);
    printf("请输入您的数据:");
    scanf("%d",&p1->info); 
   if(n>1)
    {
     p3->pre=p4;
     p4=p2;
    }
  }
 p2->next=NULL;
return head;
}
void print1(struct student *head)
{
 struct student *p;
 p=head;
 if(p!=NULL)
   do{
      printf("%d\n",p->info);
      p=p->next;
     }while(p!=NULL);
}
int main()
{
 struct student *head;
 head=creat();
 print1(head);
 return 0;
}
