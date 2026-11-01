#include<stdio.h>
#include<string.h>

void main()
{
    char mood[20];

    clrscr();

    printf("MOOD BASED MUSIC RECOMMENDER\n");

    printf("\nEnter your mood: ");
    scanf("%s", mood);

    if(strcmp(mood, "happy") == 0)
        printf("\nRecommendation: Energetic Pop Music");

    else if(strcmp(mood, "sad") == 0)
        printf("\nRecommendation: Calm Acoustic Music");

    else if(strcmp(mood, "angry") == 0)
        printf("\nRecommendation: Relaxing Instrumental Music");

    else if(strcmp(mood, "tired") == 0)
        printf("\nRecommendation: Soft Ambient Music");

    else
        printf("\nRecommendation: Explore Something New!");

    getch();
}
