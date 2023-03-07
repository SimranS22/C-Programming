// Shorthand operators

#include<stdio.h> 
int main()
{ 
    int p,q;
    printf("Enter 2 numbers \n"); 
    printf("num 1: "); 
    scanf("%d",&p); 
    printf("num 2: "); 
    scanf("%d",&q); 
    p+=q;
    printf("Addition : %d\n",p);
    p*=q;
    printf("Multiplication : %d\n",p);
    p-=q;
    printf("Subtraction : %d\n",p);
    p/=q;
    printf("Division : %d\n",p);
    p%=q;
    printf("Modulus : %d\n",p);
    return 0;
}