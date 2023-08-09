#include <stdio.h> 
int digitsum (int n); 
int main()
{
int n, sum;
printf("Enter number:"); 
scanf ("%d", &n); 
sum = digitsum(n);
printf("Sum of digits of %d is %d", n, sum);
return 0;
}

int digitsum(int n){
    int temp;
    if(n == 0){
        return 0;
    }
    else{
        temp=n%10;
        return temp + digitsum(n/10);
    }
}