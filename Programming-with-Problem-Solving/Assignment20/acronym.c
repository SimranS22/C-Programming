// Write a C Program to find Acronym form of a given string
// Example: i/p -> Simran Sharma
// o/p -> S.Sharma

#include<stdio.h>
#include<string.h>
    int main()
    {
    char str[100];
    int len,i,a;
    printf("Full name:\n");
    gets(str);
    printf("\nAcronym name:\n");
    len = strlen(str);
    printf("%c.",str[0]);
    for(i=0;i<len;i++)
    {
        if(str[i]==' ')
        {
            a=i;
        }
    }
    for(i=0; i<a; i++)
    {
        if(str[i]==' ')
        {
            printf("%c.", str[i+1]);
        }
    }
    for(i=a+1;i<len;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}