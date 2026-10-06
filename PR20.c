#include<stdio.h>
void main()
{
    float h,l,a;
    printf("Enter length:");
    scanf("%f", &l);
    printf("Enter height:");
    scanf("%f", &h);
    a=(1.0/2.0)*l*h;
    printf("(1.0/2.)*%f*%f=%f\n",l,h,a);
}