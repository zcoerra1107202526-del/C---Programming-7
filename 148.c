#include<stdio.h>
void main()
{
    int battery;

    clrscr();

    printf("Enter battery percentage: ");
    scanf("%d",&battery);

    if(battery>100 || battery<0)
        printf("Invalid Battery Level");
    else if(battery>=80)
        printf("Battery Status: Fully Charged");
    else if(battery>=30)
        printf("Battery Status: Normal");
    else
        printf("Battery Status: Low - Charge Required");

    getch();
}
