#include<stdio.h>

int add(void);
void main()
{
int s;
s=add();
printf("\nSum is=%d",s);
}

int add()
{
    int a,b,c;
    printf("Enter two Numbers: ");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}