// Write a C Program to remove all characters of a file contain except alphabets.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char c,str[100];
    FILE *fptr,*fptr1;

    fptr=fopen("file.txt","r");
    fptr1=fopen("filenew.txt","w");
    //filenew is a temporary file to store the altered string
    if(fptr==NULL||fptr1==NULL)
    {
        printf("\nError opening file\n");
        exit(1);
    }
    printf("\nNo error opening files\n");
    printf("\nAltered string:\n");
    while((c=fgetc(fptr))!=EOF)
    {
        if((c>='a')&&(c<='z')||(c>='A')&&(c<='Z'))
        {
            fputc(c,fptr1);
            printf("%c",c);
        }
    }

    printf("\nAltered string stored in filenew\n");
    fclose(fptr);
    fclose(fptr1);

    printf("\nPart 1 Executed\n");
    printf("\nNow shift content of 'filenew' to 'file'\n");

    fptr=fopen("file.txt","w");
    fptr1=fopen("filenew.txt","r");

    while((c=fgetc(fptr1))!=EOF)
    {
        fputc(c,fptr);
    }
    fclose(fptr);
    fclose(fptr1);
    printf("\nPart 2 Executed\n");
    remove("filenew.txt");
    printf("\n'filenew' has been deleted and altered string is now present in 'file' \n");
    return 0;
}