//Write a C program to find the roots of a quadratic equation

#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x1,x2,D,r1,r2;
    printf("The quadratic equation is of the form : ax^2 + bx + c = 0");
    printf("\n");
    printf("Enter a: ");
    scanf("%lf",&a);
    printf("Enter b: ");
    scanf("%lf",&b);
    printf("Enter c: ");
    scanf("%lf,",&c);
    printf("\n");

    D=b*b-4*a*c;


    if (D>0)
    {
        printf("D = %.41f",D);
        printf("\n");
        printf("The roots x1 and x2 are real."); 
        printf("\n");
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("x1 = %.4lf",x1);
        printf("\n");
        printf("x2 = %.4lf",x2);
    }
    else
    if (D==0)
    {
        printf("D = %.4lf",D);
        printf("\n");
        printf("The roots x1 and x2 are real and equal.");
        printf("\n");
        x1= -b/(2*a); 
        x2= -b/(2*a);

        printf("x1 = %.4lf",x1); 
        printf("\n");
        printf("x2 = %.41f",x2);
    }
    else
    if (D<0)
    {
        printf("D = %.4lf",D);
        printf("\n");
        printf("The roots x1 and x2 are imaginary."); printf("\n");
        r1= -b/(2*a);
        r2= sqrt(-D)/(2*a);
        printf("x1 = %.4lf + i %.4lf",r1,r2); 
        printf("\n");
        printf("x2 = %.4lf - i %.4lf",r1,r2);
    }
    return 0;
}