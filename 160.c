#include<stdio.h>
void main()
{
    int i,j;
    clrscr();

    printf("\n");
    printf("       DIWALI FIREWORKS\n\n");

    /* First firework */
    for(i=1;i<=4;i++)
    {
        printf("          ");
        for(j=1;j<=4-i;j++)
            printf(" ");

        printf("*");

        for(j=1;j<=2*i-1;j++)
            printf(" ");

        printf("*\n");
    }

    printf("             *\n");

    for(i=4;i>=1;i--)
    {
        printf("          ");
        for(j=1;j<=4-i;j++)
            printf(" ");

        printf("*");

        for(j=1;j<=2*i-1;j++)
            printf(" ");

        printf("*\n");
    }

    /* Celebration message */
    printf("\n");
    printf("     *  *  *  *  *  *  *\n");
    printf("       HAPPY DIWALI!\n");
    printf("     *  *  *  *  *  *  *\n");

    getch();
}
