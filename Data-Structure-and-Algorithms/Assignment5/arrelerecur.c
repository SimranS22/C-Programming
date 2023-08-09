#include <stdio.h>
int arraysum (int a[], int n); 
int main(){
    int a[50], n, i, sum;
    printf("Enter number of array elements:");
    scanf("%d", &n);
    printf("Array elements are :\n");
    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Printing array elements : \n");
    for (i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    sum = arraysum (a,n);
    printf("\nSum of array elements is %d", sum);
    return 0;
}

int arraysum (int a[], int n){
    if (n == -1){
        return 0;
    }
    else{
        return a[n] + arraysum(a,n-1);
    }
}