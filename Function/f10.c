//Takes Nothing Return Nothing

#include<stdio.h>
void add(void);

void add()
{
    int a,b,sum;
    printf("Enter two No: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum is=%d\n",sum);
}

void main()
{
    add();
    printf("\n***Thank You***");
}