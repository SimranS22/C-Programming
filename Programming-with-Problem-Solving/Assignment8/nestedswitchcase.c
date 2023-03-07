// Q1)Write a C program of a nested switch case.

#include<stdio.h>
int main()
{
    int floor;
    char room;
    printf("Choose a Hotel Floor and Room\n\n");

    printf("Choose floor number (1 or 2) : ");
    scanf("%d", &floor);

    printf("Choose Room (A or B) : ");
    scanf(" %c",&room);
    switch(floor)
    {
    case 1:
        switch(room)
        {
            case 'A': 
                printf("\nYou have chosen Floor 1.");
                printf("\nThe price for room A is Rs.700");
            break;

            case 'B': 
                printf("\nYou have chosen Floor 1.");
                printf("\nThe price for room B is Rs.600");
            break;

            default : 
                printf("\nWrong Room.");
        }
        break;
    case 2:
        switch(room)
        {
            case 'A': 
                printf("\nYou have chosen Floor 2.");
                printf("\nThe price for room A is Rs.600");
            break;

            case 'B': 
                printf("\nYou have chosen Floor 2.");
                printf("\nThe price for room B is Rs.500");
            break;

            default : 
                printf("\nWrong Room.");
        }
    break;

    default: printf("Wrong Floor.");
    }
    return 0;
}