#include<stdio.h>
void main()
{
    int slots, cars, available;
    int i, hours, charge, total = 0;

    clrscr();

    printf("SMART PARKING SYSTEM\n");
    printf("--------------------\n");

    printf("Enter total parking slots: ");
    scanf("%d",&slots);

    printf("Enter number of parked cars: ");
    scanf("%d",&cars);

    available = slots - cars;

    printf("\nAvailable Slots: %d\n",available);

    for(i=1;i<=cars;i++)
    {
        printf("\nEnter parking hours for car %d: ",i);
        scanf("%d",&hours);

        if(hours<=2)
            charge = 30;
        else
            charge = 30 + (hours-2)*20;

        printf("Parking Charge: Rs.%d\n",charge);

        total = total + charge;
    }

    printf("\nTotal Collection: Rs.%d",total);

    getch();
}
