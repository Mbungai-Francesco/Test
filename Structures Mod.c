#include<stdio.h>
void course(int ci)//course function tells the Library which course the book is found in
{
  char Sc[15];
  char Art[15];
  char Sosc[15];
  if(ci == 1)
  {
    printf("The subjects available are\n");
    printf("Chemisty, Physics, Biology and Maths\n");
    printf("Enter name of subject\n");
    scanf("%s",&Sc);
    switch(Sc)
  }
  else if(ci == 2)
  {
    printf("The subjects available are\n");
    printf("History, Literature, French and English\n");
    printf("Enter name of subject\n");
    scanf("%s",&Art);
    switch(Art)
  }
  else if(ci == 3)
  {
    printf("The subjects available are\n");
    printf("Economics, Commence and Accounting\n");
    printf("Enter name of subject\n");
    scanf("%s",&Sosc);
    switch(Sosc)
  }
  else
  {
    printf("In valid Course\n");
  }
}
void Uc(char n[30])
{
  struct Books Book1; /* Declare Book1 of type Book */
	/* book 1 specification */
	strcpy( Book1.Title, "C Programming");
	strcpy( Book1.Author, "Nuha Ali");
	strcpy( Book1.subject, "C Programming Tutorial");
	strcpy( Book1.BookID, "64r07");
  /* print Book1 info */
	printf( "Book 1 title : %s\n", Book1.Title);
	printf( "Book 1 author : %s\n", Book1.Author);
	printf( "Book 1 subject : %s\n", Book1.subject);
	printf( "Book 1 book_id : %s\n", Book1.BookID);
}
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
char subject[100];
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
  struct Loan loan;// Declaring Loan of type loan
  struct Reader reader;// Declaring reader of type Reader
  struct Courses Course;//Declaring Courses of type Course
  printf("Enter your readerID\n");
  scanf("%s",&reader.ReaderID);
  printf("Enter your surname\n");
  scanf("%s",&reader.Surname);
  printf("Enter your fisrt name\n");
  scanf("%s",&reader.Firstname);
  printf("Enter your gender\n");
  scanf("%s",&reader.Sex);

  char ch[30];
  int b,l,bi,li,ci,;
  printf("Enter the number of books\n");
  scanf("%d",&b);
  for(bi=1;bi<=b;bi++)// for loop for the books
  {
    printf("We have text books of courses Science, Arts or Social Sciences\n");
    Printf("Enter 1 if Science\n");
    Printf("Enter 2 if Arts\n");
    Printf("Enter 3 if Social Sciences\n");
    scanf("%d",&ci);
    course(ci);
    switch(Sc)
    {
      case'Chemistry'
          printf("Chemistry text books we have are\n");
          printf("Understanding and Advanced Chemistry\n");
          scanf("%s",&ch);
          Uc(ch);
          break;
    }
  }
  return 0;
}
