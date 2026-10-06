#include<stdio.h>
void main()
{
    float kg,gms;
    printf("Enter grams:");
    scanf("%f", &gms);
    kg=gms/1000;
    printf("%f/1000=%f",gms,kg);
}
