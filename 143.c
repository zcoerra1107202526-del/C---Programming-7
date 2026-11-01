#include<stdio.h>
void main()
{
    int choice;

    clrscr();

    printf("DIGITAL TREASURE HUNT\n");

    printf("\nFind the hidden treasure!");
    printf("\n\nChoose a location:");

    printf("\n1. Forest");
    printf("\n2. Cave");
    printf("\n3. Mountain");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 2)
    {
        printf("\nCongratulations!");
        printf("\nYou found the hidden treasure!");
    }
    else if(choice == 1)
    {
        printf("\nYou found a mysterious map!");
    }
    else if(choice == 3)
    {
        printf("\nYou found a secret message!");
    }
    else
    {
        printf("\nInvalid choice!");
    }

    getch();
}
