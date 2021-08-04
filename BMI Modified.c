#include <stdio.h>
int main()
{
  int  w;
  float h, BMI, x, Th, iw, x2;
  printf("Enter your height in meters\n");
  scanf("%f",&h);
  printf("Enter your weight in kilograms\n");
  scanf("%d",&w);
   BMI=w/(h*h);
  Th=(h*h);
  printf("Your BMI is:%.2f\n", BMI);
  if(BMI<20)
  {
    printf("You are suffering from malnutrition\n");
    iw=25*Th;
    x2=iw-w;
    printf("You have to add %.2f kg\n", x2);
  }
  else if(BMI>30)
  {
      iw=25*Th;
      x=w-iw;
    printf("You are obesse\n");
    printf("You have to lose %.2f kg\n", x);
  }
  else if(BMI>20 && BMI<25)
  {
     printf("You have a normal weight\n");
  }
  else
  {
    iw=25*Th;
    x=w-iw;
    printf("You have to lose %.2f kg\n", x);
  }
  return 0;
}
