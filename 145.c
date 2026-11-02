#include<stdio.h>
void main()
{
    int marks[5];
    int i, highest = 0;
    float average, sum = 0;

    clrscr();

    printf("STUDENT PERFORMANCE ANALYZER\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nEnter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);

        sum = sum + marks[i];

        if(marks[i] > highest)
            highest = marks[i];
    }

    average = sum / 5;

    printf("\nHighest Marks: %d", highest);
    printf("\nClass Average: %.2f", average);

    printf("\n\nStudent Marks:");

    for(i = 0; i < 5; i++)
    {
        printf("\nStudent %d: %d", i + 1, marks[i]);
    }

    getch();
}
