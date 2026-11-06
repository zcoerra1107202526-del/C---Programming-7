#include<stdio.h>
void main()
{
    int i,j;
    clrscr();

    printf("\n       DIWALI DIYA\n\n");

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3-i;j++)
            printf(" ");

        for(j=1;j<=2*i-1;j++)
            printf("*");

        printf("\n");
    }

    printf("        ||\n");

    for(i=1;i<=3;i++)
    {
        printf("     ");
        for(j=1;j<=12;j++)
            printf("*");
        printf("\n");
    }

    for(i=1;i<=3;i++)
    {
        printf("       ");
        for(j=1;j<=10-2*i;j++)
            printf("*");
        printf("\n");
    }

    printf("\n     HAPPY DIWALI!");

    getch();
}
