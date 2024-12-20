#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>20)
    {
        printf("Your age is=%i\n",age);
        printf("You can coffee with me\n");
    }
    printf("Its time to go home");
}