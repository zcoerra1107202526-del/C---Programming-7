#include<stdio.h>
void main()
{
    int i,j;
    clrscr();

    printf("\n       DIWALI LANTERN\n\n");

    for(i=1;i<=3;i++)
        printf("          |\n");

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
            printf(" ");

        printf("  /");

        for(j=1;j<=2*i+5;j++)
            printf("*");

        printf("\\\n");
    }

    for(i=1;i<=3;i++)
    {
        printf("  *");
        for(j=1;j<=11;j++)
            printf(" ");
        printf("*\n");
    }

    for(i=5;i>=1;i--)
    {
        for(j=1;j<=5-i;j++)
            printf(" ");

        printf("  \\");

        for(j=1;j<=2*i+5;j++)
            printf("*");

        printf("/\n");
    }

    for(i=1;i<=4;i++)
        printf("          |\n");

    printf("\n      HAPPY DIWALI!");

    getch();
}
