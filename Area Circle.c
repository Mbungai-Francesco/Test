#include <stdio.h>
int main()
{
  int r;
  float a;
  const float pie=3.14;
  printf("Enter the radius of circle\n");
  scanf("%d",&r);
  a=pie*(r*r);
  printf("The area of the Circle is: %.2f\n", a);
  return 0;
}
