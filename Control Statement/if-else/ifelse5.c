#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    printf("Enter value of a,b,c: ");
    scanf("%d%d%i",&a, &b, &c);
    switch(a+b*c)
    { case 1:
    printf("Please call me");
    break;

    case 2:
    printf("Don't call me");
    break;

    case 3:
    printf("Coffee with me");
    break;

    case 4:
    printf("Let's go to park");
    break;

    default:
    printf("NO cases match till now");

    }
    printf("\nEnd of programme: ");
}