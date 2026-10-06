#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter any two number: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping a=%d b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swapping a=%d b=%d\n",a,b);
}
