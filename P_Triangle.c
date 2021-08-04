#include<stdio.h>
#include<stdlib.h>
#include<math.h>
// Saleem that's the pascal triangle.. just porgrammed it while you were out at Cité verte.. Francesco..
int main()
{
  int n,i,j,p,m;
  printf("\n");
  printf("Enter an interger n to generate a pascal's triangle of n lines :");
  scanf("%d",&n);
  int a[n][n];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      int k=a[i-1][j]+a[i-1][j-1];
      if(i==j || j==0)
      a[i][j]=1;
      if(!(i==j || j==0))
      a[i][j]=k;
    }
  }

  for(p=0;p<n;p++)
  {
    for(m=0;m<=p;m++)
    {
      printf("%d ",a[p][m]);
    }
    printf("\n");
  }printf("\n");
  return 0;
}
