#include <stdlib.h>
#include <stdio.h>
int main()
{
  int c=10,i=1,j=0;
  int a,b;
  do{
  printf("Please enter a value for A :");
  scanf("%d",&a);
  printf("Please enter a value for B :");
  scanf("%d",&b);
   if(a>b)
   {
    i=i+1;
    j=i-j;
   }
   else
   {
    c=b;
    b=a;
    a=c;
   }
   b=b-a;
   printf("B is %d\n",b);
  }while(c!=4);
  printf("I is %d\n",i);
  printf("J is %d\n",j);

  return 0;
}
