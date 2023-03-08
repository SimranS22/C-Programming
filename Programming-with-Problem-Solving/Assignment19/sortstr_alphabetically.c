// Write a C Program to find sorted array of strings (alphabetically)
#include <stdio.h>
#include <string.h>
int main()
{
    int i, j , k, sp;
    sp = 0;
    j=0;
    char str[200], str1[200][200], temp[200];

    printf("Enter string:\n");
    gets(str);
    for (i=0;i<strlen(str);i++)
    {
        if ((str[i]==' ')||(str[i]==',')||(str[i]=='.')||(str[i]=='?'))
        {
            sp++;
        }
        if(i==strlen(str)-1)
        {
            sp++;
        }
    }

    for (i = 0, j = 0, k = 0;j < strlen(str);j++)
    {
        if ((str[j]==' ')||(str[j]==44)||(str[j]==46)||(str[j]==63))
        {
            str1[i][k]='\0';
            i++;
            k=0;
        }
        else
        {
            str1[i][k++] = str[j];
        }
    }
    for (i=0;i<sp;i++)
    {
        for (j=i+1;j<=sp;j++)
        {
        if (strcmp(str1[i], str1[j])>0)
        {
            strcpy(temp, str1[i]);
            strcpy(str1[i], str1[j]);
            strcpy(str1[j], temp);
        }
        }
    }
    printf("\nThe sorted string: \n");
    for (i=0;i<=sp;i++)
    {
        printf("%s ", str1[i]);
    }
    return 0;
}