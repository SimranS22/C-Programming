// Q2) Please identify the correct relational operator representationusing program:
// (a) >= (b) <= (c) => (d) != (e) =


#include<stdio.h>
int main()
{
    int a,b; 
    printf("a: "); 
    scanf("%d",&a); 
    printf("b: "); 
    scanf("%d",&b); 

    if (a>=b)
    { printf("\n%d >= %d\n",a,b); } 
    else
    if (a<=b)
    { printf("%d <= %d\n",a,b); } 
    if (a!=b)
    { printf("%d != %d\n",a,b); }
    printf("Original values of a and b respectively = %d and %d\n",a,b);
    a=b;
    printf("Modified values of a and b respectively = %d and %d\n",a,b); 
    return 0;
}

// (a),(b) and (d) are relational operators.
// Reason: (c) is a syntax error. (e) is an assignment operator.