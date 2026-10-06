#include<stdio.h>
void main()
{
    float bytes,kb,mb,gb;
    printf("Enter bytes");
    scanf("%f", &bytes);
    kb=bytes/1024;
    mb=kb/1024;
    gb=mb/1024;
    printf("%f/1024=%f\n",bytes,kb);
    printf("%f/1024=%f\n",kb,mb);
    printf("%f1024=%f\n",mb,gb);
}


