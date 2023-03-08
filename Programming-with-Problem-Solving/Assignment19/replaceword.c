// Q2) Write a C Program for word replacement
// Example: i/p -> He is good boy
// o/p -> He is bad boy

#include<stdio.h>
#include<string.h>

int main()
{
    int i,j;
    i=0;
    j=0;
    char temp,str[100],item[100],newword[100],perword[100];
    printf("Enter string:\n");
    gets(str);

    printf("\nEnter word to replace:\n");
    gets(item);
    printf("\nEnter new word to replace \'%s\' :\n",item);
    gets(newword);
    printf("\nString after word replacement:\n");
    strcat(str, " ");

    for(i=0;str[i]!='\0';i++)
    {
        temp=str[i];
        if(temp!=' ')
        {
            perword[j]=temp;
            j++;
        }
        else
        // if(str[i]==' ')
        {
            perword[j]='\0';
            j=0;
            if(strcmp(perword,item)==0)
            {
                printf("%s ",newword);
            }
            else
            {
                printf("%s ",perword);
            }
        }
    }
    return 0;
}