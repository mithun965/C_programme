#include<stdio.h>
void main()
{
    int a=10, b=5;
    int *p, *q;
    p=&a;
    q=&b;
    *q=*p;
    printf("a= %d %d %d\n",a,*p,*q);
    printf("***Thank You***");
}