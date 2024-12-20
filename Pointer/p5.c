#include<stdio.h>
void main()
{
    int a=10, b=15;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    int ****s=&r;
    int *****t=&s;

    printf("\n\nThe value of a=%d\n",a);
    printf("The value of a through pointer *p=%d\n",*p);
    printf("The value of a through double pointer **q=%d\n",**q);
    printf("The value of a through triple pointer ***r=%d\n",***r);
    printf("The value of a through forefold pointer ****s=%d\n",****s);
    printf("The value of a through fifth pointer *****t=%d\n\n\n",*****t);

    *p=20;
    printf("Updated value of a through single pointer *p=%d\n",a);

    **q=40;
    printf("Updated value of a through double pointer **q=%d\n",a);

    ***r=50;
    printf("Updated value of a through triple pointer ***r=%d\n",a);

    ****s=60;
    printf("Updated value of a through forefold pointer ****s=%d\n",a);

    *****t=10000;
    printf("Updated value of a through fifth pointer *****t=%d\n",a);

    printf("\n\n");
    printf("Address of a=%x\n",&a);
    printf("Address of a through pointer =%x\n",p);
    printf("Address of p =%x\n",&p);
    printf("Address of p through pointer=%x\n",q);
    printf("Address of q=%x\n",&q);
    printf("Address of q through pointer=%x\n",r);
    printf("Address of r=%x\n",&r);
    printf("Address of r through pointer =%x\n",s);
    printf("Address of s=%x\n",s);
    printf("\n***Thank You***");

}