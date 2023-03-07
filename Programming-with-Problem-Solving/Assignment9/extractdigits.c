// Q2) Write a C program to extract digits of a given number.

#include<stdio.h>
int main()
{
    int temp = 0, num;
    printf("Enter a number: ");

    scanf("%d",&num);
    while (num!=0)
    {
        temp = temp * 10 + num%10;
        num/= 10;
    }
    while (temp != 0)
    {
        printf("%d ", temp % 10);
        temp /= 10;
    }
    return 0;
}