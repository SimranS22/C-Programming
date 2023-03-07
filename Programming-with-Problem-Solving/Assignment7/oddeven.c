
/*Write a Program to check whether a given number is odd or even using the #define preprocessor directive and using if-else*/
#include<stdio.h>
#define a (num1%2)
int main()
{
int num1;
printf("|| Using pre-processor directive ||");
printf("Enter number: ");
scanf("%d", &num1); 
printf("\n");
if (a==0)
{ printf("The number is even. "); }
else
{ printf("The number is odd."); } 
return 0;

int num2;
printf("|| if-else directive ||");
printf("Enter number: ");
scanf("%d", &num2); printf("\n");
if (num2%2==0)
{
printf("The number is even.");
}
else
{
printf("The number is odd.");
}
}