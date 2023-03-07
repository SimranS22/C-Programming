// Q5)Write a C program to evaluate the expression for a given value.
// x=(a^b)/c
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,choice;
    double x;

    printf("-- Evaluate x=(a^b)/c --");
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    printf("-- Method of evaluation --");
    printf("\n\n1) Using pow(a,b) ");
    printf("\n2) Using for-loop ");
    printf("\nEnter choice :");
    scanf("%d",&choice);
    switch (choice){
        case 1:
            x=pow(a,b)/c;
            printf("Answer x= %.2lf",x);
        break;
        case 2: 
            for(int i=1;i<=b;++i)
            {
                x=x*a;
            }
            x=x/c;
            printf("Answer x= %.2lf",x);
            break;
    }
return 0;
}