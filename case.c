#include <stdio.h>
#include <string.h>

int main()
{
  int i;
  /*for(i=0;i<20;i++)
  {
    switch(i)
    {
      case 0:
      i+=5;
      case 1:
      i+=2;
      case 5:
      i+=5;
      default:
      i+=4;
      break;
    }
    printf("%d  ",i);
  }*/
  for(i=1;i<100;i++)
  {
    if(i%5==0 && i%3==0) printf("%d\n",i);
    else if(i%5==0) printf("?\n");
    if(i>45)break;
  }
  return 0;
}
