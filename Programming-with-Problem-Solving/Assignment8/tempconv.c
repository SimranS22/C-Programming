// Q2)Write a program to print a Temperature Conversion Chart. [Celsius and Fahrenheit]

#include<stdio.h>
int main ()
{
    double c,f;
    int ll,ul,step;
    printf("Enter lower limit: ");
    scanf("%d",&ll);
    printf("Enter upper limit: ");
    scanf("%d",&ul);
    printf("Enter the no. of steps: ");
    scanf("%d",&step);

    printf("Celsius\t\t\t\t Fahrenheit\n");
    c=ll;

    while(c<=ul)
    {
        f=(1.8*c)+32;
        printf("%.2lf\t\t\t\t %.2lf\n",c,f);
        c=c+step;
    }
    return 0;
}