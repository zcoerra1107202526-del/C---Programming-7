#include<stdio.h>
void main()
{
    int level;

    clrscr();

    printf("Enter tank water level (0-100): ");
    scanf("%d",&level);

    if(level<0 || level>100)
        printf("Invalid Water Level");
    else if(level<=20)
        printf("Pump Status: ON");
    else if(level>=90)
        printf("Pump Status: OFF");
    else
        printf("Pump Status: Standby");

    getch();
}
