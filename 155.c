#include<stdio.h>
void main()
{
    int books = 50, choice, quantity;

    clrscr();

    printf("LIBRARY BOOK TRACKER\n");
    printf("1. Borrow Books\n");
    printf("2. Return Books\n");

    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    if(quantity <= 0)
        printf("Invalid quantity!");

    else if(choice == 1)
    {
        if(quantity <= books)
        {
            books = books - quantity;
            printf("Books borrowed successfully!");
        }
        else
            printf("Not enough books available!");
    }
    else if(choice == 2)
    {
        books = books + quantity;
        printf("Books returned successfully!");
    }
    else
        printf("Invalid choice!");

    printf("\nAvailable Books: %d", books);

    getch();
}
