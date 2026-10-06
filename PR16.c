#include<stdio.h>
void main()
{
    float i,p,r,n;
    printf("Enter principal amount:");
    scanf("%f", &p);
    printf("Enter interest:");
    scanf("%f", &r);
    printf("Enter time in years:");
    scanf("%f", &n);
    i=(p*r*n)/100;
    printf("(%f*%f*%f)/100=%f",p,r,n,i);

}