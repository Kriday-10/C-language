#include<stdio.h>
void main()
{
    float C,F;
    printf("Enter temperature in fahernheit:");
    scanf("%f", &F);
    C=(F-32)*(5.0/9.0);
    printf("(%f-32)*(5.0/9.0)=%f",F,C);
}
