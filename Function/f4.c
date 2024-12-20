#include<stdio.h>
void add(void);
void sub(void);
void mult(void);
void div(void);
void even(void);

void add()
{
    int a,b,sum;
    a=10, b=15;
    sum=a+b;
    printf("\nSum is=%d",sum);
    div();
    even();
}

void sub()
{
    int a,b,sub;
    a=50,b=30;
    sub=a-b;
    printf("\nSub is=%d\n",sub);
}

void main()
{

add();
sub();
mult();
div();
printf("\nEnd of programme\n");
even();
}

void mult()
{
    int a,b,mult;
    a=5, b=6;
    mult=a*b;
    printf("\nMultiplication is=%d",mult);
}

void div()
{
    int a,b,div;
    a=60, b=5;
    div=a/b;
    printf("\ndivision is=%d",div);
}

void even()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d\n",&n);
    if(n%2==0)
    {
        printf("\nIt is a even no: ");
    }

    else
    {
        printf("\nIt is a odd no:");
    }
}