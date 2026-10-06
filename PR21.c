#include<stdio.h>
void main()
{
    float gs,al,ded,net;
    printf("Enter gross salary:");
    scanf("%f", &gs);
    al=(gs*10)/100;
    ded=(gs*3)/100;
    net=gs+al-ded;
    printf("%f+%f-%f=%f\n",gs,al,ded,net);
}