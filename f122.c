#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct student)
struct student
{
 int num;
 struct student *next;
};

struct student *creat(void)
{
 int n;
 struct student *head;
 struct student *p1,*p2;
 n=0;
 head=NULL;
 p1=p2=(struct student *)malloc(LEN);
 printf("请输入第一个结点的数据:");
 scanf("%d",&p1->num);
 while(p1->num!=0)
  {
   n=n+1;
   if(n==1)head=p1;
   else p2->next=p1;
   p2=p1;
  p1=(struct student *)malloc(LEN);
  printf("请输入下一个结点的数据:");
  scanf("%d",&p1->num);
  }
 p2->next=NULL;
 return head;
}

void print(struct student *head)
{
 struct student *p;
 printf("学生的学号为:\n");
 p=head;
 if(head!=NULL)
  do
  {
   printf("%d\n",p->num);
   p=p->next;
  }while(p!=NULL);
}

struct student *insert(struct student *head)
{
 int i=0,j=0;
 struct student *p1,*p2,*p3;
 p1=(struct student *)malloc(LEN);     //为什么在这里不可以直接定义一个静态结点？为什么使用静态结点使用print函数时会打印两次？
 p2=head;
 printf("请输入你想输入的输入的数字:");
 scanf("%d",&p1->num);
 if(head==NULL)
  { printf("此列表为空！\n");
    head=p1;
    p1->next=NULL;
    return head;}
  else if(head!=NULL)
       {
         printf("请输入您想插入的位置:");
         scanf("%d",&i);
         i=i-1;
         if(i==0)
            {
             head=p1;
             p1->next=p2;
            }
          else if(i>0)
            {while(j!=i)
               { 
                 p3=p2;
                 p2=p2->next;
                 j++;
               }
             p3->next=p1;
             p1->next=p2;
            }
         }
   return(head);
}

int main()
{
 void print(struct student *head);
 struct student *insert(struct student *head);
 struct student *creat();
 struct student *head;
 head=creat();
 head=insert(head);
 print(head);
 return 0;
}
