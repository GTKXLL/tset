#include<stdio.h>
int main()
{
 int i=0,j=0,t,l;
 int a[10]={0,1,2,3,4,5,6,7,8,9};
 for(j=0;j<9;j++){
    for(i=0;i<9;i++){
    if(a[i]<a[i+1])
      { t=a[i];
       a[i]=a[i+1];
       a[i+1]=t;}}}
  for(l=0;l<10;l++)
    printf("%d",a[l]);
  printf("\n");
  return 0;
}
