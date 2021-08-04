#include <stdio.h>
int main()
{
  int w;
  float h, BMI, Th, iw, x;
  printf("Enter your height in meters\n");
  scanf("%f",&h);
  printf("Enter your weight in kilograms\n");
  scanf("%d",&w);
   BMI=w/(h*h);
  Th=(h*h);
  printf("Your BMI is:%.2f\n", BMI);
  if(BMI>20 && BMI<25)
  {
     printf("You have a normal weight\n");
  }
  else
  {
    iw=25*Th;
    x=w-iw;
    printf("You have to lose %.2f kg", x);
  }
  return 0;
}
