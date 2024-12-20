#include<stdio.h>
void sum();   

void main()
{
    sum();
}

void sum()
{
    int a,b,sum=0;
    printf("Enter two NO ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum=%d\n",sum);
}