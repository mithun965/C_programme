#include<stdio.h>
void fun(int, int);
void main()
{
    int x=5, y=7;
    fun(x,y);
    printf("\nx=%d y=%d Pre define function\n",x,y);
}
 
void fun(int x, int y)
{
    x=7;
    y=5;
    printf("\nx=%d, y=%d User define function", x,y);
}