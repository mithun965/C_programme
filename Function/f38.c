#include<stdio.h>
void add(int,int,int);

void main()
{
    int a,b,c;
    printf("Enter three No: ");
    scanf("%d%d%d",&a,&b,&c);
    add(a,b,c);
}

void add(int x, int y, int z)
{
    int sum=x+y+z;
    printf("Sum =%d\n",sum);
    printf("End of user define function");
}