#include<stdio.h>
#include<math.h>
int Multly()
{
  float a,b,p;
  printf("Enter two values to get thier product:\n");
  scanf("%f",&a);
  scanf("%f",&b);
  p=a*b;
  printf("Product of %.2f and %.2f is:%.2f\n",a,b,p);
  return p;
}
int Sum()
{
  float a,b,s;
  printf("Enter two values to get thier sum:\n");
  scanf("%f",&a);
  scanf("%f",&b);
  s=a+b;
  printf("Sum of %.2f and %.2f is:%.2f\n",a,b,s);
  return s;
}
int Minus()
{
  float a,b,m;
  printf("Enter two values to get thier difference:\n");
  scanf("%f",&a);
  scanf("%f",&b);
  m=a-b;
  printf("Differnce of %.2f and %.2f is:%.2f\n",a,b,m);
  return m;
}
int Divide()
{
  float a,b,d;
  printf("Enter two values to get thier quotient:\n");
  scanf("%f",&a);
  scanf("%f",&b);
  d=a/b;
  printf("Quotient of %.2f and %.2f is:%.2f\n",a,b,d);
  return d;
}
int main()
{
 int i,n;
 printf("How many times you intend to use this\n");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   int v;
   printf("Choose between\n");
   printf("1.Sum\n");
   printf("2.Product\n");
   printf("3.Division\n");
   printf("4.Minus\n");
   scanf("%d",&v);
   switch(v)
  {
    case 1:
    Sum();
    break;
    case 2:
    Multly();
    break;
    case 3:
    Divide();
    break;
    case 4:
    Minus();
    break;
    default:
    printf("Invalid Operation\n");
  }
 }
return 0;
}
