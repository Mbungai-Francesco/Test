#include<stdio.h>
#include<stdlib.h>

float av(float a[],int n,int i,float m,int j)
{
  float k;
  for(j=0;j<n;j++)
  {printf("Enter values to be computed:\n");
  scanf("%f",&a[j]);
  m+=a[j];
  }
  k=(m/n);
  return k;
}

int main()
{
int i,j;
float a[5],m=0;
int n=sizeof(a)/sizeof(a[0]);
printf("How many digits do you intend to use?\n");
scanf("%d",&n);
printf("How many times do you intend to enter values?\n");
scanf("%d",&i);
do{
  printf("Average is %f\n",av(a,n,i,m ,j));
  i--;
}while(i>0);

  return 0;
}
