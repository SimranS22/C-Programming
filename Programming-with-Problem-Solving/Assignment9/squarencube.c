// Q1) Write a C program to find the square and cube of n natural numbers within a range.

#include<stdio.h>
#include<math.h>
int main ()
{
int ll,ul,interval,a,b,c;

printf("Enter lower limit: ");
scanf("%d",&ll);
printf("Enter upper limit: ");
scanf("%d",&ul);
printf("Enter Interval: ");
scanf("%d",&interval);

printf("Number\t\t\t\t Square\t\t\t\t Cube\n");

for(int i=ll;i<=ul;i+=interval)
{

a=pow(i,2);
b=pow(i,3);
printf(" %d\t\t\t\t %d\t\t\t\t %d\n",i,a,b);
}
getch();
return 0;
}