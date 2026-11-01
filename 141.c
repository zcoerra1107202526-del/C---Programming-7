#include<stdio.h>
void main()
{
    int units;
    float bill;

    clrscr();

    printf("ELECTRICITY BILL ANALYZER\n");

    printf("\nEnter electricity units: ");
    scanf("%d", &units);

    if(units <= 100)
        bill = units * 3.50;
    else if(units <= 200)
        bill = 350 + (units - 100) * 5.50;
    else
        bill = 900 + (units - 200) * 7.50;

    printf("\nTotal Bill: Rs.%.2f", bill);

    if(units <= 100)
        printf("\nUsage: Low");
    else if(units <= 200)
        printf("\nUsage: Moderate");
    else
        printf("\nUsage: High");

    getch();
}
