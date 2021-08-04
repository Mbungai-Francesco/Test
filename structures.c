#include<stdio.h>
struct Reader//variable declaration for the Structure Reader
{
  char ReaderID[6];
  char Surname[20];
  char Firstname[20];
  char Sex[1];
};
struct Books// variable declaration for the Structure Book
{
char BookID[6];
char Title[20];
char Author[20];
char Publisher[20];
char Datepub[10];
};
struct Loan//variable declaration for the Structure Loan
{
char BookID[7];
char ReaderID[7];
char Datetaken[10];
char Datedue[10];
};
int main()
{
  struct Loan loan;
  struct Books Book;// Declaring Book of type Books
  struct Reader reader;// Declaring reader of type Reader
  printf("Enter your readerID\n");
  scanf("%s",reader.ReaderID);
  printf("Enter your surname\n");
  scanf("%s",reader.Surname);
  printf("Enter your fisrt name\n");
  scanf("%s",reader.Firstname);
  printf("Enter your gender\n");
  scanf("%s",reader.Sex);
  printf("ReaderID is %s\n",reader.ReaderID);
  printf("Reader is %s %s\n",reader.Surname,reader.Firstname);
  printf("Reader's Gender is %s\n\n",reader.Sex);

  int b,l,bi,li;
  printf("Enter the number of books\n");
  scanf("%d",&b);
  for(bi=1;bi<=b;bi++)// for loop for the books
      {
        printf("Enter Book Id\n");
        scanf("%s",Book.BookID);
        printf("Enter Title\n");
        scanf( "%s",Book.Title);
        printf("Enter Author\n");
        scanf("%s",Book.Author);
        printf("Enter Name of Publisher\n");
        scanf("%s",Book.Publisher);
        printf("Enter Date Published\n");
        scanf("%s",Book.Datepub);
      printf("\nBookID is %s\n",Book.BookID);
      printf("Title is %s\n",Book.Title);
      printf("Author is %s\n",Book.Author);
      printf("Publisher is %s\n",Book.Publisher);
      printf("Date Published is %s\n\n",Book.Datepub);

  printf("Enter Date taken\n");
  scanf("%s",loan.Datetaken);
  printf("Enter dateline to return books\n");
  scanf("%s",loan.Datedue);
  printf("ReaderID is %s\n",reader.ReaderID);
  printf("BookID is %s\n",Book.BookID);
  printf("%s\n",loan.Datetaken);
  printf("%s\n",loan.Datedue);
    }
return 0;
}
