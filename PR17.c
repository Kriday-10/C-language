#include<stdio.h>
void main()
{
    float l,a,p;
    printf("Enter length:");
    scanf("%f", &l);
    a=l*l;
    p=4*l;
    printf("%f*%f=%f\n",l,l,a);
    printf("%f*4=%f\n",l,p);
}

