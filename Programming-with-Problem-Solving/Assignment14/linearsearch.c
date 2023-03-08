// Write a C Program to perform linear search

#include<stdio.h>
void ls(int a[], int n, int element);
int main()
{
    int a[50],i,n,element;

    printf("Size of array: ");
    scanf("%d",&n);
    printf("\nElements of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Element to find: ");
    scanf("%d",&element);

    ls(a,n,element);

    return 0;
}

void ls(int a[], int n, int element)
{ int pos, i;
    for(i=0;i<n;i++)
    {
        if(element==a[i])
        {
            pos=i+1;
        }
    }
    printf("The element %d is present at position %d of the array.",element,pos);
}