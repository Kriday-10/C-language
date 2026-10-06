#include<stdio.h>
void main()
{
    float min1,hrs,hr;
    printf("Enter time:");
    scanf("%f %f", &min1, &hrs);
    hr=(min1/60)+hrs;
    printf("%f+(%f/60)=%f",hrs,min1,hr);
}
