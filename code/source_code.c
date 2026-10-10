#include<stdio.h>
#include<string.h>

struct books
{
    char booktitle[50];
    char authorname[30];
    float bookprice;
    int copies;

}b[500];

   int i=0;
   int count=0;


   int showWelcomeMessage()
   {
       printf("******************************************\n\n");
       printf("Welcome to Simple Book Management System.\n\n");
       printf("******************************************\n\n\n");
   }

   int showGoodByeMessage()
   {
       printf("**************************************************\n\n");
       printf("Thank You For Using Simple Book Management System\n\n");
       printf("**************************************************\n\n\n");
   }

   int showMenuOptions()
   {
       printf("Please select a menu option number:\n");
       printf("1) Display this menu.\n");
       printf("2) Show all available books.\n");
       printf("3) Add a book to the book shop.\n");
       printf("4) Search a book by title.\n");
       printf("5) Display the total number of books.\n");
       printf("6) Exit from this book system.\n\n\n");

   }

   void showbooks()
   {
      if(count == 0){
        printf("No available books.\n\n");
      }
      else{
        for(i=0;i<count;i++){
            printf ("Book Title: %s\n", b[i].booktitle);
            printf("Book Author: %s\n", b[i].authorname);
            printf("Book Price: %f\n", b[i].bookprice);
            printf("Book Copies: %d\n", b[i].copies);
            printf("\n");
        }
      }
   }

   void addbook()
   {
         getchar();

         printf("Enter Book Title: ");
         scanf("%[^\n]%*c", &b[i].booktitle);
         printf("Enter Book Author: ");
         scanf("%[^\n]%*c", &b[i].authorname);
         printf("Enter Book Price: ");
         scanf("%f", &b[i].bookprice);
         printf("Enter Book Copies: ");
         scanf("%d", &b[i].copies);

         i=i+1;
         count++;
   }

   void searchbook()
  {
      char s[100];
    printf("Enter book title to search: ");
        getchar();
        int flag = 0;
    scanf("%[^\n]%*c", &s);
    for(int i=0; i<count; i++){
        int f=0;
    for(int j=0; j<strlen(s); j++){
        if(s[j]!=b[i].booktitle[j]) f=1;
        }
        if(!f){
                flag = 1;
            printf("Book title: %s\n", b[i].booktitle);
            printf("Book author: %s\n", b[i].authorname);
            printf("Book price: %f\n", b[i].bookprice);
            printf("Book copies: %d\n", b[i].copies);
            break;
        }
    }
    if (flag == 0){
        printf ("\nBook not found.");
    }

   }

   void showNumberOfBooks()
   {
       int total_books=0;
       for(i=0;i<count;i++){
        total_books=total_books+b[i].copies;
       }
     printf("Total number of books in the shop: %d", total_books);
   }

int main()
{
    showWelcomeMessage();
    showMenuOptions();

    int choice;

    while(choice!=6){
        printf("Enter your choice:");
        scanf("%d",&choice);
        printf("\n");

  switch(choice)
  {
    case 1:
       main();
       printf("\n\n");
       break;

    case 2:
       showbooks();
       printf("\n\n");
       break;

    case 3:
       addbook();
       printf("\n\n");
       break;

    case 4:
       searchbook();
       printf("\n\n");
       break;

    case 5:
       showNumberOfBooks();
       printf("\n\n");
       break;

    case 6:
       showGoodByeMessage();
       printf("\n\n");
       break;
  }
}
}
