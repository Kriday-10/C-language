#include<stdio.h>
void main()
{
    float gs,dis,net;
    printf("Enter gross salary:");
    scanf("%f", &gs);
    dis=(gs*10)/100;
    net=gs-dis;
    printf("Net Sales is %f-%f=%f\n",gs,dis,net);
}