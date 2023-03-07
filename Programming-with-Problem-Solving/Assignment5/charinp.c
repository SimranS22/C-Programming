// Q6) Write the different library functions to take character input
#include<stdio.h> 

int main()
{
    char c,d;
    printf("Enter character one : ");
    c=getchar();
    printf("The character entered is : %c", putchar(c));
    fflush(stdin);
    printf("\n");
    printf("Enter character two : ");
    scanf("%c",&d);
    printf("The character entered is : %c", d);
    getch();
    return 0;
}