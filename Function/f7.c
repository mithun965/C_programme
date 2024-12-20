#include<stdio.h>
int add(int, int);

void main()
{
    int result;
    result=add(10,8);
    printf("Result=%d\n",result);
    
    //return 100;
    printf("End of programme: ");

}

int add(int a,int b)
{
    int c;
    c=a+b;
    return c ;
}

