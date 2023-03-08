// Write a C Program to display structure contains using pointer variables

#include<stdio.h>
struct Height
{
    float cm,feet;
    int ch;
};
int main()
{
    struct Height *ptr,h1;
    ptr=&h1;
    printf("Enter choice to get height in (1)Feet or (2)Centimetre: ");
    scanf("%d",&ptr->ch);
    switch(ptr->ch)
    {
        case 1: 
            printf("Enter Height in Centimetre: ") ;
            scanf("%f",&ptr->cm);
            ptr->feet=0.0328084 * ptr->cm;
            printf("Height in Feet: %f",ptr->feet);
            break;
        case 2: 
            printf("Enter Height in Feet:") ;
            scanf("%f",&ptr->feet);
            ptr->cm=30.48 * ptr->feet;
            printf("Height in Centimeter: %f",ptr->cm);
            break;
        default:printf("Wrong choice.") ;
    }
    return 0;
}