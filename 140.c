#include<stdio.h>
void main()
{
    int level;

    clrscr();

    printf("WATER TANK CONTROLLER\n");
    printf("--------------------\n");

    printf("Enter water level (0-100): ");
    scanf("%d",&level);

    if(level<0 || level>100)
    {
        printf("Invalid Water Level");
    }

    else if(level<=20)
    {
        printf("\nWater Level: LOW");
        printf("\nMotor Status: ON");
    }

    else if(level>=90)
    {
        printf("\nWater Level: FULL");
        printf("\nMotor Status: OFF");
    }

    else
    {
        printf("\nWater Level: NORMAL");
        printf("\nMotor Status: ON");
    }

    getch();
}
