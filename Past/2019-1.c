#include <stdlib.h>
#include <stdio.h>
int main()
{
  int n,r,c;
  int k=1;
  printf("Input an interger greater than zero\n");
  scanf("%d",&n);
  printf("\n");
  int a[n][n];
  for(r=0;r<n;r++)
  {
    for (c=0;c<n;c++)
    {
      a[r][c]=k;
      k++;
      //scanf("%d",&a[r][c]);
    }
  }
  for(r=0;r<n;r++)
  {
    for (c=0;c<n;c++)
    {
      /*a[r][c]=k;
      k++;*/
      printf("Array[%d][%d]=%d\n",r,c,a[r][c]);
    }
  }
  return 0;
}
