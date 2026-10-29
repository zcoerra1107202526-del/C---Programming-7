#include<stdio.h>
#include<string.h>

void main()
{
    char mode[20];

    clrscr();

    printf("Available Game Modes:\n");
    printf("1. EASY\n");
    printf("2. HARD\n");
    printf("3. EXPERT\n");

    printf("\nEnter Game Mode: ");
    scanf("%s", mode);

    if(strcmp(mode, "EASY") == 0)
    {
        printf("Easy Mode Activated!");
    }
    else if(strcmp(mode, "HARD") == 0)
    {
        printf("Hard Mode Activated!");
    }
    else if(strcmp(mode, "EXPERT") == 0)
    {
        printf("Expert Mode Activated!");
    }
    else
    {
        printf("Invalid Game Mode!");
    }

    getch();
}
