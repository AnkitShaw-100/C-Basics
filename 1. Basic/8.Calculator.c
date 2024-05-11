//Calculator
#include<stdio.h>

void main()
{
    //Accepting integers 
    int a = 0 ,b = 0 ,ch;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter another number : ");
    scanf("%d",&b);
    printf("\n Enter 1 for Addition : \n Enter 2 for Subtarction : \n Enter 3 for Multiplication : \n Enter 4 for Division : ");
    scanf("%d",&ch);   
    //Creating switch case
    switch(ch)
    {
        case 1:
        int add = a + b;
        printf("Addition of 2 digits : %d ",add);
        break;

        case 2:
        int sub = a - b;
        printf("Subtraction of 2 digits : %d ",sub);
        break;
        
        case 3:
        int mul = a * b;
        printf("Multiplication of 2 digits : %d ",mul);
        break;
        
        case 4:
        int div = a / b;
        printf("Division of 2 digits : %d ",div);
        break;

    }
}
