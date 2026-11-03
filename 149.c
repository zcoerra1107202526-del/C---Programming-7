#include<stdio.h>
void main()
{
    int hours;
    float fee;

    clrscr();

    printf("Enter parking hours: ");
    scanf("%d",&hours);

    if(hours<=0)
        printf("Invalid Parking Time");
    else if(hours<=2)
        fee=30;
    else
        fee=30+(hours-2)*20;

    if(hours>0)
        printf("\nParking Fee = Rs. %.2f",fee);

    getch();
}
