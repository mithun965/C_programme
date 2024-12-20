#include<stdio.h>
void fun(int *, int*);

void main()
    {
        int x=5, y=7;
        fun(&x, &y);
        printf("x=%d y=%d",x,y);
    }
    void fun(int *x, int *y)
    {
        *x=20;
        *y=30;
        printf("X=%d, y=%d\n", *x,*y);

    }
