// Write a C Program to find
// i)No of characters ii) No of words iii) No of sentences of a given string.
// Example: i/p -> We are Indian. We love our nation.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int characters,words,sentences,i;

    characters=0;

    words=0;
    sentences=0;
    i=0;

    printf("Enter string:\n");
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            ++characters;
            ++words;
        }
        else
        {
            ++characters;
        }
        if(str[i]=='.'||str[i]=='?'||str[i]=='!')
        {
            ++sentences;
        }
        i++;
    }
    printf("\nNumber of characters= %d",characters);
    printf("\nNumber of words= %d",words+1);
    printf("\nNumber of sentences= %d",sentences);

    return 0;
}