
float f2(int n)
{
 float p1;
 int i;
 n=n-1;
 for(i=1;i<n;i++)
  n=n*i;
 p1=n;
 return p1;
}

float f1(int x,int n)
{
 float p1;
 int i;
 n=n-1;
 for(i=1;i<n;i++)
  x=x*x;
 p1=x;
 return p1;
}
