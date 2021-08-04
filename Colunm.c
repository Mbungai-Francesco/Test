#include <stdio.h>

int main()
{
  int Bit;
  float Col=16;
  int Ans=0;
  while(Col>=1)
  {
    printf("Enter bit value\n");
    scanf("%d",&Bit);
    Ans=Ans+(Col*Bit);
    Col=Col/2;
    printf("%d\n",Ans);
    printf("%.2f\n",Col);
 }
 printf("Decimal value is:");
 printf("%d", Ans);
 printf("\nCol is:%.2f", Col);
 return 0;
}
