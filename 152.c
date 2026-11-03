#include<stdio.h>
void main()
{
    int units;
    float bill = 0;

    clrscr();

    printf("ELECTRICITY BILL ANALYZER\n");
    printf("------------------------\n");

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if(units < 0)
    {
        printf("Invalid Units");
    }
    else
    {
        if(units <= 100)
            bill = units * 3.50;

        else if(units <= 200)
            bill = 100 * 3.50 +
                   (units - 100) * 5.00;

        else
            bill = 100 * 3.50 +
                   100 * 5.00 +
                   (units - 200) * 7.00;

        printf("\nTotal Electricity Bill: Rs. %.2f", bill);
    }

    getch();
}
