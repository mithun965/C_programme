//Takes Something Return Nothing//
#include<stdio.h>
void add(int, int);

void add(int a, int b)
{
    int sum=0;
    sum=a+b;
    printf("Sum is=%d\n",sum);
}

void main()
{
    int x,y;
    printf("Enter two No: ");
    scanf("%d%d\n",&x, &y);
    add(x,y);
    printf("***Thank You***");
}