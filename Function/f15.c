#include<stdio.h>

void sum2(void);
void mult2(void);
void sub2(void);

void sum2()
{
    int a,b,sum=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum of (a+b) is=%d\n",sum);
}

void mult2()
{
    int c,d,mult=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&c,&d);
    mult=c*d;
    printf("Multiplicatin of c*d is=%d\n",mult);
}

void sub2()
{
    int e,f,sub=0;
    printf("Enter two numbers: ");
    scanf("%d%d",&e,&f);
    sub=e-f;
    printf("Subtraction of two numbers=%d\n",sub);
    
}

void main()
{
    sum2();
    mult2();
    sub2();
}