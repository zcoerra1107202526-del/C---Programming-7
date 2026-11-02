#include<stdio.h>
void main()
{
    int choice;
    float balance = 5000;
    float amount;

    clrscr();

    printf("DIGITAL ATM SIMULATOR\n");

    printf("\n1. Check Balance");
    printf("\n2. Deposit Money");
    printf("\n3. Withdraw Money");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("\nBalance: Rs.%.2f", balance);
            break;

        case 2:
            printf("\nEnter deposit amount: ");
            scanf("%f", &amount);

            if(amount > 0)
            {
                balance = balance + amount;
                printf("\nUpdated Balance: Rs.%.2f", balance);
            }
            else
                printf("\nInvalid Amount!");

            break;

        case 3:
            printf("\nEnter withdrawal amount: ");
            scanf("%f", &amount);

            if(amount > 0 && amount <= balance)
            {
                balance = balance - amount;
                printf("\nUpdated Balance: Rs.%.2f", balance);
            }
            else
                printf("\nInsufficient Balance or Invalid Amount!");

            break;

        default:
            printf("\nInvalid Choice!");
    }

    getch();
}
