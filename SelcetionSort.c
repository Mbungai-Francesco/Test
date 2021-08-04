#include <stdio.h>
// SelectionSort
// Swap function with parameters i,j and array of type interger
void swap(int a[] ,int i, int j )
{
  int temp;
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
}
// SelectionSort function with parameters n and array (void)
void SelectionSort(int a[],int n)
{
  for (int i=n-1;i>=1;i--)
  {
    int maxIdx = i;
    for (int j = 0; j < i; j++)
        {
          if (a[j] >= a[maxIdx])
          {
          maxIdx = j;
          swap(a,i, maxIdx);
          }
        }
  }
}
// PrintArray function; prints the Sorted Array
  void PrintArray(int a[], int size)
  {
    int i;
    for(i=0;i<size;i++)
    {
      printf("%d\n", a[i]);
    }
    printf("\n");
}
  int main()
  {
  int a[10],i;
  int n= sizeof(a)/sizeof(a[0]);//n is the size of the array
  printf("Enter number of intergers\n");
  scanf("%d",&n);
  printf("Enter the intergers\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  }
  SelectionSort(a,n);// Calling SelectionSort
  printf("Sorted Array:\n");
  PrintArray(a,n);// Calling PrintArray
  return 0;
}
