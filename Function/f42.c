#include<stdio.h>
float add(int,int,float);

float add(int x,int y, float c)
{
    float sum;
    sum=x+y+c;
    return sum;
}



int main()
{
    int a,b;
    float c,d;
    a=10, b=12;
    c=15.2;
    d=add(a,b,c);
    printf("Value of d=%f\n",d);
    return 0;
}

