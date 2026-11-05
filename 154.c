#include<stdio.h>
void main()
{
    char msg[100];
    int i;

    clrscr();

    printf("Enter a message: ");
    gets(msg);

    for(i = 0; msg[i] != '\0'; i++)
    {
        msg[i] = msg[i] + 3;
    }

    printf("\nEncoded Message: %s", msg);

    getch();
}
