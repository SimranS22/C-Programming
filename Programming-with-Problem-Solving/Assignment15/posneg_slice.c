// Find the positive and negative slice of an array

#include<stdio.h>

int main()
{
    int n,arr[50],temp,count,i;

    count=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("The array elements are:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<0)
        {
            temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count+=1;
        }
    }
    printf("The sliced array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}