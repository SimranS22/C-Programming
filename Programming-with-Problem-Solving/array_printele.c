// Print the First, Last and Middle elements of an array

#include<stdio.h>

int main()
{
    int arr[100],n,i;

    printf("Number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nFirst element: %d",arr[0]);
    printf("\nLast element: %d",arr[n-1]);

    if(n%2==0)
    { printf("\nMiddle elements are: %d and %d",arr[(n/2)-1],arr[n/2]); }
    else
    { printf("\nMiddle element: %d",arr[(n-1)/2]); }

    return 0;
}