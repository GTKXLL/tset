#include<stdio.h>
int main()
{
 int a[6]={2,4,6,8,10,12};
 int *p[3]; int i,j;
 p[0]=&a[0];p[1]=&a[2];p[2]=&a[4];
 printf("以下按行输出:\n");
 for(j=0;j<3;j++)
 { for(i=0;i<2;i++)
    printf("%d",*(p[j]+i));
   printf("\n");
 }
 printf("以下按列输出:\n");
 for(j=0;j<2;j++)
 { for(i=0;i<3;i++)
    printf("%d",*(p[i]+j));
   printf("\n");
 }
 return 0;
}
