#include<stdio.h>
int main()
{
 int a[5][10],v[10],b[5],max;char c;
 int action1(A),action2(A),action3(A),action3.1(int max,int A),action4(A);
 printf("请输入您想选择的模式:");
 c=getchar;
 switch(c)
  case'1':v=action1(a);break;
  case'2':b=action2(a);break;
  case'3':max=action3(a);action3.1(max,a);break;
  case'4':sum=action4(a);break;
 return 0;
}



action1(A)
{ int i,j,sum=0,v[10];
  for(i=0;i<=9;i++)
   {for(j=0;j<=4;j++)
      { sum=sum+a[i][j];}
     v[i]=sum/5;
   }
  return v;
}


action2(A)
{
  int i,j,v[5],sum=0;
   for(i=0;i<=4;i++)
    for(j=0;j<=9;j++)
      {
       sum=sum+a[i][j];
      }
     v[i]=sum/10;
  return v;
}


action3(A)
{
 int max,j,i,temp;
  max=a[0][0];
  for(j=0;j<=4;j++)
   for(i=0;i<=9;i++)
   { if((max<a[i][j])
       {temp=max;max=a[i][j];a[i][j]=temp;}
   }
 return max;
}

action3.1(max,A)
{
 int j,i;
  for(j=0;j<=4;j++)
   for(i=0;i<=9;i++)
    {if(max==a[j][i])
      printf("这是第%d门课，第%d位学生",j,i);
    }
  continue;
}




