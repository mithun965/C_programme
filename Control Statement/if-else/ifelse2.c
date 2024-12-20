#include<stdio.h>
#include<conio.h>
void main()
{
    int age, salary;
    printf("Enter your age & salary: ");
    scanf("%d%d",&age, &salary);
    if(age>50)
    {
        if(salary<60000)
        {
            printf("salary=salary+10000\n");
        }
        else
        {
            printf("salary=salary+5000\n");
        }

    }
    else
    {
        printf("salary=salary+3000\n");
    }
    printf("End of programme:\n");
}