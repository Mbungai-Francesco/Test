#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX_LEN 100

//bool found=false;
int found=-1;
int position=1;

void bin_search_rec(char a[][MAX_LEN],char name[10],int min,int max)
{
 int bt=min, top=max, mid ;
 if(min<=max)
 {
   mid=(min+max)/2;
   if(strcmp(name,a[mid])=0)
   {
     found=1;
     position=mid;
   }
   else if(strcmp(name,a[mid])<0)
   {
     bin_search_rec(a,name,mid+1,top);
   }
   else
   {
     bin_search_rec(a,name,bt,mid-1);
   }
 }
}

void bin_search(char a[][MAX_LEN],char nm[10],int mn,int mx)
{
  bin_search_rec(a,nm,mn,mx);
  if(found<0)
  {
    printf("Name not found\n");
  }
  else
  {
    printf("%s\n",a[position]);
  }
}

void select_sort(char a[][MAX_LEN],int n)
{
 int i,j,min;
 char max[MAX_LEN];
  for(i=0;i<n-1;i++)
  { //set current element as minimum value
    int min=i;
    strcpy(max,a[i]);
    //check the element to be minimum
    for(j=i+1;j<n;j++)
    {
      if(strcmp(max,a[j])>0)
      {
        strcpy(max,a[j]);
        min=j;
      }
      //swap the minimum element
      //with the current element
    }
    if (min != i)
    {char tmp[MAX_LEN];
    strcpy(tmp,a[i]);
    strcpy(a[i],a[min]);
    strcpy(a[min],tmp);}
  }
}
void doDisplay(char a[][MAX_LEN],int n)
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("%s\n",a[i]);
  }
}

int main()
{
 char table[][MAX_LEN]={"Bert","Jeff","Gary","Neba","Chang","Olga","Nora","Mary","Vera","Rani","Neil","Jill","Cain","Cara","Hart"};
 int m=sizeof(table)/sizeof(table[0]),p=0;
 char n[10];
 doDisplay(table,m);
 select_sort(table,m);
 printf("Enter a name to search\n");
 scanf("%s",n);
 bin_search(table,n,p,m);
}
