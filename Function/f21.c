#include<stdio.h>
float sum();
void main()
{
    sum();
}

float sum()
{
    float a,b,sum=0;
    printf("Enter Two Numbers: ");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("Sum is=%f\n",sum);
}