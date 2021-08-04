#include <stdio.h>
int main()
 {
  int n1, n2;
printf("Enter a number: \n");
scanf("%d",&n1);
if (n1 > 5)
    n2=n1*n1;
else
    n2 = n1*n1*n1;
    printf("Result is: %d\n",n2);
    return 0;
}
