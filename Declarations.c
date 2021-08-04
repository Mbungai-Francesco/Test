#include <stdio.h>
int main()
{
  float w=12.9,y=3.2,a1,a=3,b=10,c=7,a2,a3,a4,a5,a6,a7,a8;
  a1= a+b*c;
  a2= a-b-c;
  a3= a/b;
  a4= b/a;
  a5= a-b/c;
  a6= w/y;
  a7= y/w;
  a8= a+w/b;
    printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n",a1,a2,a3,a4,a5,a6,a7,a8);
  return 0;
}
