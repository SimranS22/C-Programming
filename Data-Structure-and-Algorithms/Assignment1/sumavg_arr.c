// Write a C Program to create and display 100 element in 1-D array Display sum and average of these elements.
#include <stdio.h>

int avg(int num, int n[]);
int sum (int num, int n[]);
int main()
{
int n [100], num,i;
printf("Enter number of elements: ");
scanf ("%d", & num);

for (i=0; i < num; i++)
{
    scanf("%d", &n[i]);
}

printf("\n sum = %d\n", sum (num, n));
printf("\n Average = %d \n", avg (num, n));
return 0;
}

int sum(int num, int n[])
{
    int sum = 0;
    for (int i=0; i<num; i++)
    {
        sum=sum+n[i];
    }
    return sum;
}
int avg (int num, int n[])
{
    int av;
    av = sum(num,n)/num;
    return av;
}
