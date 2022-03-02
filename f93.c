#include<stdio.h>
#include<math.h>
int main()
{
 float a,b,c,P,K; float x;
 scanf("%f,%f,%f",&a,&b,&c);
 P=b*b-4*a*c;
 K=sqrt(P);
 if(P>0)
   {   x=(-b+K)/(2*a);
       printf("x1=%2f\n",x);
       x=(-b-K)/(2*a);
       printf("x2=%2f\n",x);
   }
 if(P==0)
   {   x=(-b)/(2*a);
       printf("x1=x2=%2f\n",x);
   }
 if(P<0)
   {   printf("x1,x2不存在。\n");  }
 return 0;
}




