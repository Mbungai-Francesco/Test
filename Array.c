#include <stdio.h>
#include <string.h>

int main()
{
  int i,j,r1=0,r2=0,r3=0,r4=0,c1=0,c2=0,c3=0,c4=0,d1=0,d2=0,k=1,l;
  int n=4;
  int a[n][n];
  printf("Enter numbers from 1-16(in any oder)\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      a[i][j]=k;
      k++;
      //scanf("%d",&a[i][j]);
    }
  }

  for(j=0;j<n;j++)
  {
    r1+=a[0][j]; r2+=a[1][j]; r3+=a[2][j]; r4+=a[3][j];
    c1+=a[j][0]; c2+=a[j][1]; c3+=a[j][2]; c4+=a[j][3];
  }

  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("%d ",a[i][j]);
    }printf("\n");
  }
  printf("\n");

  printf("Row sum: %d %d %d %d\n",r1,r2,r3,r4);
  printf("Row sum: %d %d %d %d\n",c1,c2,c3,c4);
}
