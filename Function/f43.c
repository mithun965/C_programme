#include<stdio.h>
float add(int,int,float);

float add(int x,int y, float c)
{
   return x+y+c;
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
