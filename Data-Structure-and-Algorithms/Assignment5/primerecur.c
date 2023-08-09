#include <stdio.h> 
#include <math.h>
int prime(int n, int m);

int main()
{
    int n, pn;
    printf("Enter number: "); 
    scanf("%d", &n);
    pn = prime(n, sqrt(n));
    if (pn){
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not a prime number",n);
    }
    return 0;
}
int prime(int n, int m){
    if(m==1){
        return 1;
    }
    else {
        if(n%m==0){
            return 0;
        }
        else{
            return prime(n,m-1);
        }
    }
}