#include<stdio.h?
void main()
{
    int level;

    clrscr();

    printf("SMART WATER TANK MONITOR\n");

    for(level = 0; level <= 100; level += 20)
    {
        printf("\nWater Level: %d%%", level);

        if(level == 100)
            printf(" - Tank Full!");
        else if(level >= 80)
            printf(" - Almost Full");
        else if(level >= 40)
            printf(" - Filling");
        else
            printf(" - Low Water");
    }

    printf("\n\nWater Tank Monitoring Completed!");

    getch();
}
