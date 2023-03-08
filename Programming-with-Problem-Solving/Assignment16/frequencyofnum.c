// Write a C Program to find the frequency of the numbers.

#include <stdio.h>
int main()
{
    int a[50], freq[50], n, i, j, counter;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Input elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        freq[i] = -1;
    }

    for(i=0; i<n; i++)
    {
        counter = 1;
        for(j=i+1; j<n; j++)
        {

            if(a[i]==a[j])
            {
                counter++;
                freq[j] = 0;
            }
        }

        if(freq[i] != 0)
        {
            freq[i] = counter;
        }
    }

    printf("\nElement |Frequency\n");
    for(i=0; i<n; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d\t|%d\n", a[i], freq[i]);
        }
    }
return 0;
}