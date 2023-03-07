// Write a Program to find the solutions of 2 linear equations

#include<stdio.h>
#include<math.h>
int main()
{
    int a1,a2,b1, b2,c1,c2,x,y;
    printf("Equation 1 : a1^x + b1^y + c1 = \n");
    printf("Enter a1:");
    scanf("%d", &a1);
    printf("\n");
    printf("Enter b1: ");
    scanf("%d", &b1);
    printf("\n");
    printf("Enter c1:");
    scanf("%d", &c1); 
    printf("\n");



    printf("Equation 2 : a2^x + b2^y + c2 = \n");
    printf("Enter a2: ");
    scanf("%d", &a2); 
    printf("\n");
    printf("Enter b2: ");
    scanf("%d", &b2); 
    printf("\n");
    printf("Enter c2: "); 
    scanf("%d", &c2);
    printf("\n");

    x=((b1*c2)-(b2*c1))/((a1*b2)-(b1*a2)); 
    y=((a2*c1)-(c2*a1))/((a1*b2)-(b1*a2));

    printf("The value of x is: %d",x); 
    printf("\n");
    printf("The value of y is: %d",y); 
    printf("\n");
    
    return 0;
}