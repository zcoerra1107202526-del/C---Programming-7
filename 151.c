#include<stdio.h>
void main()
{
    int ans, score = 0;

    clrscr();

    printf("DIGITAL QUIZ COMPETITION\n");
    printf("-----------------------\n");

    printf("\n1. Which language is used for C programming?");
    printf("\n1. HTML   2. C   3. JavaScript");
    printf("\nEnter answer: ");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\n2. Which symbol ends a C statement?");
    printf("\n1. ;   2. :   3. ,");
    printf("\nEnter answer: ");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("\n3. Which function displays output?");
    printf("\n1. scanf   2. printf   3. input");
    printf("\nEnter answer: ");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("\n\nFinal Score: %d/3", score);

    if(score == 3)
        printf("\nExcellent Performance!");
    else if(score == 2)
        printf("\nGood Performance!");
    else
        printf("\nKeep Practicing!");

    getch();
}
