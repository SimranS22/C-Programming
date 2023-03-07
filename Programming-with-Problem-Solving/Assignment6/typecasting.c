// Check the output

#include<stdio.h> 
int main()
{
    int a,b; 
    float c,d;
    a=10;
    b=3;
    c=a/b;
    printf("\nAnswer = %f",c);  //3.000000

    d=(float)a/b;
    printf("\nAnswer = %f",d);  //3.333333
    return 0;
}

// Reason: The input values are integers, and the final answer is
// supposed to be a float value. This can be fixed by type casting.