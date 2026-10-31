#include<stdio.h>
void main()
{
    int i;
    float voltage;

    clrscr();

    printf("ROBOT BATTERY MONITOR\n");
    printf("--------------------\n");

    for(i=1;i<=5;i++)
    {
        printf("\nEnter battery voltage reading %d: ",i);
        scanf("%f",&voltage);

        if(voltage>=12.0)
            printf("Battery Status: Excellent");

        else if(voltage>=10.5)
            printf("Battery Status: Normal");

        else if(voltage>=9.0)
            printf("Battery Status: Low");

        else
            printf("Battery Status: Critical");

        printf("\n");
    }

    getch();
}
