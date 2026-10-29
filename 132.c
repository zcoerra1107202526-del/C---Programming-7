#include<stdio.h>
#include<string.h>

void main()
{
    char word[20];

    clrscr();

    printf("Enter Secret Word: ");
    scanf("%s", word);

    if(strcmp(word, "ROBOT") == 0)
    {
        printf("Access Granted!");
    }
    else if(strcmp(word, "CIRCUIT") == 0)
    {
        printf("Welcome Engineer!");
    }
    else
    {
        printf("Access Denied!");
    }

    getch();
}
