#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  int a[4][4];
  int i,j,k=1;
  for(i=1;i<=4;i++)
  {
    for(j=1;j<=i;j++)
    {
      if(j==1 || j==i)
      a[i][j]=k;
      else
      a[i][j]=a[i-1][j]+a[i-1][j-1];
    }
  }
  for(i=1;i<=4;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d\n",a[i][j]);
      printf("\t");
    }
  }
  return 0;
}
