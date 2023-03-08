// Write a C Program for String input and display with and without space

#include<stdio.h>
#include<string.h>
void space(char *string);
int main()
{
    char string[50];

    printf("Input String: ");
    scanf("%[^\n]%*c",string);
    printf("\nString with spaces: ");
    printf("%s",string);
    printf("\n\nString without space: ");
    space(string);

    return 0;
}

void space(char *string)
{ 
    int i,c;
    c=0;
    for(i=0;string[i];i++)
    {
        if(string[i]!=' ')
        {
            string[c++]=string[i];
        }
    }
    string[c]='\0';
    printf("%s",string);
}