// Q2) Relation of type casting in C language like float <-> double,
// int <-> char.
// Explicit Conversion


#include<stdio.h>
int main(){
    float p=241.6,r=3.8,t=7.5;
    double SI;

    SI=(double)((p*r*t)/100); 
    printf("SI = %lf\n",SI);    //68.856003

    int a=2,d;
    char ch='q'; 

    d=(int)ch+a;
    printf("sum = %d",d);   //115
    return 0;
}