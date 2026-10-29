#include<stdio.h>
#include<string.h>

void main()
{
    char command[20];

    clrscr();

    printf("Enter Robot Command: ");
    scanf("%s", command);

    if(strcmp(command, "START") == 0)
    {
        printf("Robot Started!");
    }
    else if(strcmp(command, "STOP") == 0)
    {
        printf("Robot Stopped!");
    }
    else if(strcmp(command, "LEFT") == 0)
    {
        printf("Robot Turning Left!");
    }
    else if(strcmp(command, "RIGHT") == 0)
    {
        printf("Robot Turning Right!");
    }
    else
    {
        printf("Invalid Command!");
    }

    getch();
}
