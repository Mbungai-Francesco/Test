#include<stdio.h>
#include<stdlib.h>

int main()
{
 char fn[10];
 int msh, amtnd, ll;
 int in;
 const int Tamt=65000000;
 printf("Enter the Fon's name\n");
 scanf("%s",&fn);
 printf("Enter his membership\n");
 printf("1 if he is a member 0 if he is not\n");
 scanf("%d",&msh);
 printf("Enter the amount needed\n");
 scanf("%d",%amtnd);
 printf("Enter the life of loan\n");
 scanf("%d",&ll);

 if(Tamt>amtnd)
 {
   if(msh==1)
   {
     in=((0.04*ll)+amtnd);
   }
   else
   {
     in=((0.06*ll)+amtnd);
   }

 }
}
