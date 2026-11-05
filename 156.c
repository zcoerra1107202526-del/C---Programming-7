#include<stdio.h>
void main()
{
    int x = 0, y = 0, i;
    char direction;

    clrscr();

    printf("ROBOT DIRECTION SIMULATOR\n");

    for(i = 1; i <= 5; i++)
    {
        printf("\nEnter direction (N/S/E/W): ");
        scanf(" %c", &direction);

        switch(direction)
        {
            case 'N': y++; break;
            case 'S': y--; break;
            case 'E': x++; break;
            case 'W': x--; break;
            default: printf("Invalid direction!");
        }
    }

    printf("\nFinal Robot Position:");
    printf("\nX = %d", x);
    printf("\nY = %d", y);

    getch();
}
