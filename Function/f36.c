#include<stdio.h>
int sum(void);

void main()
{
    int s;
    s=sum();
    printf("Sum is=%d\n",s);
}

int sum()
{
    int a,b,sum;
    printf("Enter two No: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return (a+b);
}