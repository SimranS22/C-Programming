// Q5) Write a C program for a multiplication table within a range.

#include<stdio.h>
int main()
{
    double ll,ul,n1,n2;
    printf("Enter the lower limit horizontal: ");
    scanf("%lf",&n1);
    printf("Enter the upper limit horizontal: ");
    scanf("%lf",&n2);
    printf("Enter lower limit vertical: ");
    scanf("%lf",&ll);
    printf("Enter upper limit vertical: ");
    scanf("%lf",&ul);
    printf("Multiplication table\n");
    for (int i = n1; i <= n2; i++)
    {
        printf("\t%d", i);
    }
    printf("\n");
    for (int j = ll; j <= ul; j++)
    {
        printf("%d\t", j);
        for (int k = n1; k <= n2; k++)
        {
            printf("%d\t", j * k);
        }
        printf("\n");
    }
    return 0;
}