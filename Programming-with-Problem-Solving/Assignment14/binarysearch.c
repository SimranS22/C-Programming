// Binary search requires the input array 
// i) to be sorted
// ii) to have unique elements

#include<stdio.h>
void bubbles(int a[], int n);
int binarysearch(int a[], int n, int element);
int main()
{
    int a[50],i,n,element,index;

    printf("Size of array: ");
    scanf("%d",&n);

    printf("\nElements of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element to find: ");
    scanf("%d",&element);
    
    index=binarysearch(a,n,element);
    if(index==-1)
        printf("\n\nNo element exists.");
    else
        printf("\n\nUsing Binary Search\nElement %d found at position = %d",element,index+1);

    return 0;
}


int binarysearch(int a[], int n, int element)   //array is asc sorted
{ 
    int start,end,mid,i;
    start=0;
    end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(element==a[mid])
        {
            return mid;
        }
        else if(element>mid)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return -1;
}