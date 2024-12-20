#include<stdio.h>

float sum(void);

void main()
{
    sum(5,7);
}

float sum()
{
    float a,b,sum=0;
    printf("Enter two Numbers:");
    scanf("%f%f",&a, &b);
    sum=a+b;
    printf("Sum=%f\n",sum);
}