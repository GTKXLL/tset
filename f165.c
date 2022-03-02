#include<stdio.h>
int *findmax(int *s,int t,int *k)
{
 int max,j,l;int *p;
 max=*s;
 for(j=0;j<t;j++)
   if(max<*(s+j)) {max=*(s+j);l=j;}
 *k=l;
 p=&l;
 return p;
}
int main()
{ int a[10]={12,23,34,45,56,67,78,89,11,22},k,*add;
  add=findmax(a,10,&k);
  printf("%d,%d,%x\n",a[k],k,*add);
  return 0;
}

