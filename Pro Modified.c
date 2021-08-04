// C program to implement selection sort for
// array of strings.
#include <stdio.h>
#include <string.h>
#define MAX_LEN 100

// Sorts an array of strings where length of every
// string should be smaller than MAX_LEN
void selectionSort(char arr[][MAX_LEN], int n)
{
    int i, j;

    // One by one move boundary of unsorted subarray
    char minStr[MAX_LEN];
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        int max_idx = i;
        strcpy(minStr, arr[i]);
        for (j = i+1; j < n; j++)
        {
            // If min is greater than arr[j]
            if (strcmp(minStr, arr[j]) > 0)
            {
                // Make arr[j] as minStr and update min_idx
                strcpy(minStr, arr[j]);
                max_idx = j;
            }
        }

        // Swap the found minimum element with the first element
        if (max_idx != i)
        {
            char temp[MAX_LEN];
            strcpy(temp, arr[i]); //swap item[pos] and item[i]
            strcpy(arr[i], arr[max_idx]);
            strcpy(arr[max_idx], temp);
        }
    }
}

// Driver code
int main()
{
    char arr[10][MAX_LEN];
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;

    printf("Enter number of names\n");
    scanf("%d",&n);// User enters the number of names
    printf("Enter the names\n");
    for(i=0;i<n;i++)// for loop to enable user to enter n names
    {
    scanf("%s",arr[i]);
    }
    printf("Given array is\n");
    for (i=0;i<n;i++)
    {
      printf("%d: %s \n", i, arr[i]);
    }
    selectionSort(arr, n);
    printf("\nSorted array is\n");
    for (i = 0; i < n; i++)
     {
       printf("%d: %s \n", i, arr[i]);
     }
    return 0;
}
