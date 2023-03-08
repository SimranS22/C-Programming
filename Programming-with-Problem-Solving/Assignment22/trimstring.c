// Write a C Program to trim a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int i,j;

    printf("Enter any string : ");

    scanf("%[^\n]%*c",string);

    for(i=0;string[i]==' '||string[i]=='\t';i++);
    {
        for(j=0;string[i];i++)
        {
            string[j++]=string[i];
        }
        string[j]='\0';
        for(i=0;string[i]!='\0';i++)
        {
            if(string[i]!=' '&& string[i]!='\t')
            {
                j=i;
            }
        }
    }
    string[j+1]='\0';
    printf("\nTrimmed string :- %s -",string);
    return 0;
}