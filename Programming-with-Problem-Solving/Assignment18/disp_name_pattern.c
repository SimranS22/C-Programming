// Display the name in the following pattern
// Example:
// simran
// simra
// simr
// sim
// si
// s

#include<string.h>
#include<stdio.h>

int main()
{
    char str[100],temp[100];
    int size;

    scanf("%[^\n]%*c",str);
    strcpy(temp,str);

    size=strlen(str);
    while(size>=0)
    {
        str[size-1]='\0';
        printf("%s\n",str);
        size--;
            if(str[size-1]==' ')
            {
                str[size-2]='\0';
                size--;
            }
    }
    return 0;
}