// Write a C Program to add or delete an element in an existing array.

#include<stdio.h>
int ls(int a[], int n, int ele);
int main()
{
    int a[50],i,n,ele,loc,choice;

    printf("Size of array: ");
    scanf("%d",&n);
    printf("\nElements of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Choose to delete(1) or insert(2): ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1: 
        printf("Element to delete: ");
        scanf("%d",&ele);
        if(n==0)
        { 
            printf(" No Elements. ");
            exit(1); 
        }
        loc=ls(a,n,ele);
        if(loc!=-1)
        {
            for(i=loc;i<n;i++)
            {
                a[i]=a[i+1];
            }
            n=n-1;
            printf("Altered array: ");
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
        }
        else
        {
            printf("Element does not exist.");
        }
        break;
    case 2: 
        printf("Element to insert : ");
        scanf("%d",&ele);
        if(n==50)
        { 
            printf(" Too many Elements. ");
            exit(1);
        }
        printf("Enter the position at which you want to insert the element : ");
        scanf("%d",&loc);
        if((loc-1)>=0&&(loc-1)<=n-1)
        {
            for(i=n;i>(loc-1);i--)
            {
                a[i]=a[i-1];
            }
            a[loc-1]=ele;
            n=n+1;
            printf("Altered array: ");
            for(i=0;i<n;i++)
            {
                printf("%d ",a[i]);
            }
        }
        else
        { 
            printf("Invalid location."); 
        }
        break;
    default:
        printf("Wrong choice.");
    }
return 0;
}

int ls(int a[], int n, int ele)
{ 
    int pos, i;
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            return i;
        }
    }
    return -1;
}