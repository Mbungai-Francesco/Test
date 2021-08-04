#include <stdio.h>
#include <string.h>
void swap(char a[] ,char i, char j)
{
  char temp;
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
}
void SelectionSort(char a[],char n)
{
  for (char i=n-1;i>=1;i--)
  {
    int albet = i;
    for (int j = 0; j < i; j++)
        {
          if (a[j] >= a[albet])
          {
          albet = j;
          swap(a,i, albet);
          }
        }
int main()
{
  int i,j,names[10], albet;
  int i= sizeof(names)/sizeof(names(0));
  printf("Enter the number of names \n") ;
  scanf("%d",&i) ;
  for()
  return 0;
}
