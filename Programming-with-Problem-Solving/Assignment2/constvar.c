
//Difference between a constant and a variable
#include<stdio.h>
    int main (){
    int a, r; //variable
    const int p=9;
    //constant
    printf("Enter number a="); 
    scanf("%d", &a);
    r=p+a;
    printf("Sum = %d ",r);
    return 0;
}