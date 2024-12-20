#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>25 && age<30)
    {
        printf("Your age is=%d\n",age);
        printf("You can coffee with me\n");
    }
    else
    {
        printf("Your age is=%d\n",age);
        printf("Go to home and sleep\n");
    }
    printf("End of programme: ");
}