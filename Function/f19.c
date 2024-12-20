#include<stdio.h>
void main()
{
    void sum(int a, int b);
    sum(5,7);

}

void sum(int x, int y)
{
    int sum=0;
    sum=x+y;
    printf("sum is=%d\n",sum);
}