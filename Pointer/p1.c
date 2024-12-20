#include<stdio.h>
void main()
{
    int a=10, b=50;
    int *p, *q;
    p=&a;
    q=&b;
    printf("Value of a=%d\n",a);
    printf("Value of a through pointer p=%d\n",*p);
    printf("address of a=%x in Hexadecimal\n",&a);
    printf("address of a through pointer p=%x in Hexadecimal\n",p);
    printf("address of p pointer=%x in Hexadecimal\n",&p);
    printf("***Thank You***");
}