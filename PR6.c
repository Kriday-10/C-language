#include<stdio.h>
void main()
{
    float min1,min,hrs;
    printf("Enter time:");
    scanf("%f %f", &hrs, &min1);
    min=hrs*60+min1;
    printf("%f*60+%f=%f",hrs,min1,min);
}
