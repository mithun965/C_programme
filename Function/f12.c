#include<stdio.h>
int add(void);

int add()
{
    int a,b,sum;
    printf("Enter two No: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("This is user define function");
    return sum;

}

void main()
{
    int result=0;
    result=add();
    printf("\nSum is=%d\n",result);
    printf("***Thank You***");
}
