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
   printf("这里运行了吗？");
   printf("%d\n",p->num);
   p=p->next;
  }while(p!=NULL);
}

struct student *insert(struct node *head,struct student *p)
{	//将p指向的结点插入链表，并使链表保持有序 
	struct student *p1,*p2;
	if(head==NULL)	//如果原链表为空 
	{
		head=p;
		p->next=NULL;
		return head;
	}
	p2=p1=head;
	while((p->data)>(p1->data)&&(p1->next!=NULL))
	{
		p2=p1;
		p1=p1->next;
	}
	if((p->data)<=(p1->data))
	{
		p->next=p1;
		if(head==p1)	//插在链表首部 
			head=p;		
		else
			p2->next=p1;	//插在链表中间 
	}
	else
	{
		p1->next=p;		//插在链表尾结点之后 
		p->next=NULL;
	}
	return head;
}

int main()
{
 
