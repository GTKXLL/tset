#include<stdio.h>
int main()
{
 float *search(float(*pointer)[4],int n);
 static float score[][4]={{60,70,80,90},{50,89,67,88},{34,78,90,66},{80,90,100,70}};
 float *p;int i,m;
 printf("请输入学生数量n:")
 scanf("%d",&m);
 printf("分数为NO.%d:\n",m);
 p=search(score,m);
 for(i=0;i<4;i++) printf("%5.2f\t",*(p+i));
 return 0;
}
float *search(float(*pointer)[4],int n)
{
 float *p;
 p=*(pointer+n);
 return p;
}

