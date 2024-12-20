#include<stdio.h>
void sum(int m, int n);
void main()
{
sum(15,7);


}

void sum(int a, int b)
{
    int sum=0;
    sum=a+b;
    printf("Sum=%d",sum);
}