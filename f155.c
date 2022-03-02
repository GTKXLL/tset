int max_value(int arr[2][4])
{
 int i,j,k,l;
 k=a[0][0];
 for(i=0;i<2;i++)
   for(j=0;j<4;j++)
     if(k<a[i][j])
       {l=k;k=a[i][j];a[i][j]=l;}
 return k;
}
