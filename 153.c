#include<stdio.h>
void main()
{
    int secret = 37;
    int guess;
    int attempts = 0;

    clrscr();

    printf("SECRET NUMBER CHALLENGE\n");
    printf("----------------------\n");

    printf("Guess a number between 1 and 100\n");

    while(guess != secret)
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess > secret)
            printf("Too High!");

        else if(guess < secret)
            printf("Too Low!");

        else
            printf("\nCorrect Guess!");
    }

    printf("\nAttempts: %d", attempts);

    getch();
}
