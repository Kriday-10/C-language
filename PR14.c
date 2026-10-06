#include<stdio.h>
void main()
{
    float C,F;
    printf("Enter temperature in celsius:");
    scanf("%f", &C);
    F=((9.0/5.0)*C)+32;
    printf("(9.0/5.0)*%f)+32=%f",C,F);
}
