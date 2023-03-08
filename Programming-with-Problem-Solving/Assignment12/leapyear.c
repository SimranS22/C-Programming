#include<stdio.h>
int main()
{
    int ll,ul,interval;
    printf("To print the leap years within a range of years.\n");
    printf("Enter lower limit(Year) : ");
    scanf("%d",&ll);

    printf("Enter upper limit(Year) : ");
    scanf("%d",&ul);
    printf("\nThe leap years are :\n");
    for(int i=ll;i<=ul;i++)
    {
        if(((i%400==0)||(i%4==0))&&(i%100!=0))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}