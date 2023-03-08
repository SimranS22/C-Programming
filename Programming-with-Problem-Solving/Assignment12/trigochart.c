#include<stdio.h>
#include<math.h>

int main()
{
    int ll,ul,interval;
    float r;
    printf("Enter lower limit(Degree) : ");

    scanf("%d",&ll);
    printf("Enter upper limit(Degree) : ");
    scanf("%d",&ul);
    printf("Enter interval : ");
    scanf("%d",&interval);

    printf("Trignometric Table\n\n");
    printf("deg\t\tsin(r)\t\tcos(r)\t\ttan(r)\n");

    for(float i=ll;i<=ul;i+=interval)   //for radian values

    {
        r=3.1428*(i/180);
        printf("%d\t\t%.2f\t\t%.2f\t\t%.2f\n",(int)i,sin(r),cos(r),tan(r));
    }
    return 0;
}