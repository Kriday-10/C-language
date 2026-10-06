#include<stdio.h>
void main()
{
    float dollar,rs,pd;
    printf("Enter dollars:");
    scanf("%f", &dollar);
    rs=dollar*48;
    pd=rs/70;
    printf("%f*48=%f\n",dollar,rs);
    printf("%f/70=%f\n",rs,pd);
}
