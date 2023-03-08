#include<stdio.h>
#include<math.h>

int main()
{
    int ll,ul,interval;
    printf("Enter lower limit : ");
    scanf("%d",&ll);
    printf("Enter upper limit : ");
    scanf("%d",&ul);
    printf("Enter interval : ");
    scanf("%d",&interval);

    printf("Log Table\n\n");
    printf("x value\t\tlog(x)\t\tlog10(x)\n");
    for(float i=ll;i<=ul;i+=interval)
    {
        printf("%.4f\t\t%.4f\t\t%.4f\n",i,log(i),log10(i));
    }
    return 0;
}