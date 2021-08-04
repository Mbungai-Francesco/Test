#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int inverse2(float a,float b,float c,float d,float t)
{
  int i,j;
  float p=(1/t);
  int n=1;
  float m[2][2]={a,-b,-c,d};
  printf("The inverse of the matrix is:\n");
  for(i=0;i<=n;i++)
  {
   for(j=0;j<=n;j++)
   {
     printf(" %.1f     ",p*m[i][j]);
   } printf("\n");
 }

  return 0;
}

/*int inverse3()
{

  return 0;
}*/

int det2()
{
  int t,i,j,a,b,c,d;
  int n=1;
  int m[2][2];
  printf("Enter a 2*2 matrix\n");
  for(i=0;i<=n;i++)
  {
   for(j=0;j<=n;j++)
   {
     scanf("%d",&m[i][j]);
   }
  }
  for(i=0;i<=n;i++)
  {
   for(j=0;j<=n;j++)
   {
     printf(" %d     ",m[i][j]);
   } printf("\n");
 }
  a=m[0][0]; b=m[0][1]; c=m[1][0]; d=m[1][1];
  t=((a*d)-(c*b));
  printf("The determinate of the matrix is.. %d \n",t);
  inverse2(d,b,c,a,t);
  return t;
}

int det3()
{
  int t,i,j;
  int n=2;
  int m[3][3];
  int a,b,c,d,e,f,g,h,k;
  printf("Enter a 3*3 matrix\n");
  for(i=0;i<=n;i++)
  {
    for(j=0;j<=n;j++)
    {
      scanf("%d",&m[i][j]);
    }
  }
  a=m[0][0]; b=m[0][1]; c=m[0][2]; d=m[1][0]; e=m[1][1]; f=m[1][2]; g=m[2][0]; h=m[2][1]; k=m[2][2];
  t=(a*((e*k)-(f*h))-b*((d*k)-(f*g))+c*((d*h)-(e*g)));
  printf("The determinate of the matrix is.. %d \n",t);
  return t;
}

int main()
{
  int a;
  printf("Choose between\n");
  printf("1. for a 2*2 matrix\n");
  printf("2. for a 3*3 matrix\n");
  printf("0. for none\n");
  scanf("%d",&a);
  do{
    switch(a)
    {
    case 1:
    det2();
    break;
    case 2:
    det3();
    break;
    default:
    printf("Invalid value\n");
    }
  }while(a>0);
  return 0;
}
