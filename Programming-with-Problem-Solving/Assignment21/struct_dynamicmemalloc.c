// Write a C Program to allocate space for structure using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (char*)malloc(n * sizeof(char));

    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        printf("Memory successfully allocated using malloc.\n");
        for (i = 0; i < n; ++i)
        {
            scanf(" %c",&ptr[i]);
        }
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i)
        {
            printf("%c ", ptr[i]);
        }
    }

    return 0;
}