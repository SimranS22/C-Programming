#include<stdio.h>
int main()
{
    int array[100],n,max,min,i,j,pos1,pos2;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    max=array[0];
    min=array[0];
    for(i=0,j=0;i<n,j<n;i++,j++)
    {
        if(max<array[i])
        {
            max=array[i];
            pos1=i;
        }
        if(min>array[j])
        {
            min=array[j];
            pos2=j;
        }
    }
    printf("\nMAX = %d at index %d and position %d of the array.\n", max, pos1,pos1+1) ;
    printf("\nMIN = %d at index %d and position %d of the array.", min, pos2, pos2+1) ;

    return 0;
}