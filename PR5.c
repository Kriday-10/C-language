#include<stdio.h>
void main()
{
    float a,b,s,d,m,e;
    printf("Enter two numbers");
    scanf("%f %f", &a, &b);
    s=a+b;
    d=a-b;
    m=a*b;
    e=a/b;
    printf("%f+%f=%f\n",a,b,s);
    printf("%f-%f=%f\n",a,b,d);
    printf("%f*%f=%f\n",a,b,m);
    printf("%f/%f=%f\n",a,b,e);
}


