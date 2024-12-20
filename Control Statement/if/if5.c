#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    printf("Enter your age:");
    scanf("%i",&age);
    if(age==25)
    {
        printf("Your age is=%d\n",age);
        printf("You can go coffee with me\n");
    }
    printf("Its time to go home");
}