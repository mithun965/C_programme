//Takes Something Return Something

#include<stdio.h>
int add(int, int);

int add(int a, int b)
{
    int sum=0;
    sum=a+b;
    printf("Sum is=%d(Predfine function value)\n",sum);
    return sum;
}

void main()
{
    int x,y,return_value;
    printf("Enter two No: ");
    scanf("%d%d\n",&x, &y);
    return_value=add(x,y);
    printf("Return value is=%d\n",return_value);
    printf("\n***Thank You***");
}