// Q2) Relation of type casting in C language like float <-> double,
// int <-> char.
// Implicit Conversion

#include<stdio.h> 
int main()
{
    char p='X',v;
    int a=2,d,g=100; 
    float b=7,e,h=3.4;
    double c;
    c=a+b;  //
    d=h-a;
    e=p*a;
    v=g+b;
    printf("Answer (c)= %lf\n",c);  //9.000000
    printf("Answer (d)= %d\n",d);   //1
    printf("Answer (e)= %f\n",e);   //176.000000 
    printf("Answer (v)= %c\n",v);   //k 
    return 0;
}