#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{
 int num;
 struct student *next;
};

int n;
struct student *creat(void)
{
 struct student *head;
 struct student *p1,*p2;
 n=0;
 p1=p2=(struct student *)malloc(LEN);
 scanf("%d",&p1->num);
 head=NULL;
 while(p1->num!=0)
  {
   n=n+1;
   if(n==1)head=p1;
   else p2->next=p1;
   p2=p1;
  p1=(struct student *)malloc(LEN);
  scanf("%d",&p1->num);
  }
 p2->next=NULL;
 return(head);
}

void print(struct student *head)
{
 struct student *p;
 printf("编号为:\n");
 p=head;
 if(head!=NULL)
 do
 {
   printf("%d\n",p->num);
   p=p->next;
 }while(p!=NULL);
}

struct student *del(struct student *head)
{
 int i=0,j=0;
 struct student *p1,*p2;
 if(head==NULL)
   return head;
 p1=head;
 printf("请输入您想删除的节点:");
 scanf("%d",&i);
 i=i-1;
 if(i==0)
 head=p1->next;
 if(i>0)
  { while(j!=i)
      { p2=p1;
        p1=p1->next;
        j++;
      }
  p2->next=p1->next;
  }       
 return(head);
}

int main()
{
 struct student *head;
 head=creat();
 head=del(head);
 print(head);
 return 0;
}
