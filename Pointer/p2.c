#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10, b=9, c=0;
    int *p, *q;
    p=&a;
    q=&b;
    
    printf("Value of c before updating=%d\n\n",c);
    c=*q;

    printf("Value of c after updating=%d\n",c);
    printf("Address of c=%x\n\n",&c);

    printf("value of a before updating=%d\n",a);

    *p=20;

    printf("Value of a=%d\n",a);
    printf("Value of a through pointer p=%d\n",*p);
    printf("address of a=%x\n",&a);
    printf("address of a through pointer %x\n",p);
    printf("address of pointr p=%x\n",&p);

    printf("\n\nValue of b=%d\n",b);
    printf("Value of b through pointer q=%d\n",*q);
    printf("address of b=%x\n",&b);
    printf("address of b through pointer *q %x\n",q);
    printf("address of pointr *q=%x\n",&q);

    *q=50;
    printf("Value of b after updating=%d\n",b);

    c=100;
    printf("value of c=%d\n",c);
    printf("***Thank You***");
}