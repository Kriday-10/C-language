#include<stdio.h>
void main()
{
    float l,b,a,p;
    printf("Enter length:");
    scanf("%f", &l);
    printf("Enter breadth:");
    scanf("%f", &b);
    a=l*b;
    p=2*(l+b);
    printf("%f*%f=%f\n",l,b,a);
    printf("2*(%f*%f)=%f\n",l,b,p);
}

