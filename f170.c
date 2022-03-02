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
struct student *insert(struct student *head)
{
 int i=0;
 struct student *p1,*p2,*p;
 p=(struct student *)malloc(LEN);
 printf("请向a输入值:");
 scanf("%s",p->data);
 p->next=NULL;
 p1=p2=head;
 if(*(head->data)=='a')
  { head=p;
    p->next=p1;
    i++;
  }
 else if(*(head->data)!='a')
  do{
    p1=p1->next;
     if(p1!=NULL)
      if(*(p1->data)=='a')
        { p2->next=p;
          p->next=p1;
          i++;
        }
     if(p1!=NULL)
      p2=p1;
    }while(p1!=NULL);
 if(i==0)
  {
   p2->next=p;
  }
 return head;
}
 
 
int main()
{
 struct student *head,*p1;
 head=creat();
 p1=head;
 head=insert(p1);
 print(head);
 return 0;
}

