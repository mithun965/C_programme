#include<stdio.h>
//voi sum();            //The code will run but with a warning.

void main()
{
    sum();
}

void sum()
{
    int a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum=%d\n",sum);
}