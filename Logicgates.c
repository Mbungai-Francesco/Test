#include<stdio.h>
int OR()
{
  int a,b,c;
  printf("Implimenting OR gate\n");
  printf("Please enter a binary value for A..");
  scanf("%d",&a);
  printf("Please enter a binary value for B..");
  scanf("%d",&b);
  if(a==0&&b==0)
  {
  c=0;
  }
  else
  {
  c=1;
  }
  printf("Output is :%d\n",c);
  return c;
}
int AND()
{
 int a,b,c;
 printf("Implimenting AND gate\n");
 printf("Please enter a binary value for A..");
 scanf("%d",&a);
 printf("Please enter a binary value for B..");
 scanf("%d",&b);
 if(a==1&&b==1)
 {
 c=1;
 }
 else
 {
 c=0;
 }
 printf("Output is :%d\n",c);
 return c;
}
int NOR()
{
  int a,b,c;
  printf("Implimenting NOR gate\n");
  printf("Please enter a binary value for A..");
  scanf("%d",&a);
  printf("Please enter a binary value for B..");
  scanf("%d",&b);
  if(a==0&&b==0)
  {
  c=1;
  }
  else
  {
  c=0;
  }
  printf("Output is :%d\n",c);
  return c;
}
int NAND()
{
  int a,b,c;
  printf("Implimenting NOR gate\n");
  printf("Please enter a binary value for A..");
  scanf("%d",&a);
  printf("Please enter a binary value for B..");
  scanf("%d",&b);
  if(a==1&&b==1)
  {
  c=0;
  }
  else
  {
  c=1;
  }
  printf("Output is :%d\n",c);
  return c;
}
int XOR()
{
  int a,b,c;
  printf("Implimenting XOR gate\n");
  printf("Please enter a binary value for A..");
  scanf("%d",&a);
  printf("Please enter a binary value for B..");
  scanf("%d",&b);
  if((a==1&&b==0)||(a==0&&b==1))
  {
  c=1;
  }
  else
  {
  c=0 ;
  }
  printf("Output is :%d\n",c);
  return c;
}
int XNOR()
{
  int a,b,c;
  printf("Implimenting XNOR gate\n");
  printf("Please enter a binary value for A..");
  scanf("%d",&a);
  printf("Please enter a binary value for B..");
  scanf("%d",&b);
  if((a==1&&b==1)||(a==0&&b==0))
  {
  c=1;
  }
  else
  {
  c=0 ;
  }
  printf("Output is :%d\n",c);
  return c;
}
int main()
{
  int v;
  printf("Choose between\n");
  printf("1.OR Gate\n");
  printf("2.AND Gate\n");
  printf("3.NOR Gate\n");
  printf("4.NAND Gate\n");
  printf("5.XOR Gate\n");
  printf("6.XNOR Gate\n");
  scanf("%d",&v);
  switch(v)
 {
   case 1:
   OR();
   break;
   case 2:
   AND();
   break;
   case 3:
   NOR();
   break;
   case 4:
   NAND();
   break;
   case 5:
   XOR();
   break;
   case 6:
   XNOR();
   break;
   default:
   printf("Invalid Operation\n");
 }
}
