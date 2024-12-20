#include<stdio.h>
float add(float, float);

float add(float a, float b)
{
    float c;
    c=a+b;
    printf("Sum is=%f\n",c);
    return c;
}
void main()
{
    float a,b, result;
    printf("Enter Two Numbers: ");
    scanf("%f%f",&a,&b);
    result=add(a,b);
    printf("Result is=%f\n",result);
}
