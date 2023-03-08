//Implement following utility without using library functions
// i)String length
// ii)String concatenation
// iii)String comparison


#include<stdio.h>
int main()
{
char str[50], str1[50],str2[50],str3[100];
int i,j,k,c,choice;

printf("-- Perform String Functions without using String library --");
    printf("\n1) String Length");
    printf("\n2) String Concatenation");
    printf("\n3) String Comparison");
    printf("\nEnter choice :");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        c=0;
        printf("Enter the string: ");
        scanf("%s",str);
        for(i=0;str[i]!='\0';i++)
        {
            c=c+1;
        }
        printf("Length of string: %d",c);
        break;

    case 2:
        i=0;
        j=0;
        k=0;
        printf("String 1:");
        scanf("%s",str1);
        printf("String 2:");
        scanf("%s",str2);
        while(str1[i]!='\0'|| str2[j]!='\0')
        {
            str3[k++]=str1[i++];
            if(str1[i]=='\0')
            {
                while(str2[j]!='\0')
                {
                    str3[k++]=str2[j++];
                }
            }
        }
        str3[k]='\0';
        printf("Concatenated string is %s",str3);
        break;

    case 3:
        i=0;
        j=0;
        printf("String 1:");
        scanf("%s",str1);
        printf("String 2:");
        scanf("%s",str2);
        while(str1[i]!='\0')
        {
            i++;
        }
        while(str2[j]!='\0')
        {
            j++;
        }
        if(i==j)
        {
            printf("The strings are the same");
        }
        else
        {
            printf("The strings are not the same");
        }
        break;
    default:
        break;
    }
return 0;
}