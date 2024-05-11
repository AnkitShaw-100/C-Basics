// Reverse a number 
#include<stdio.h>

void main()
{
    int n,r,rev=0;
    printf("Enter a digit : ");
    scanf("%d",&n);
    while(n>0)
    {
        r = n % 10;
        rev = (rev * 10) + r;
        n = n / 10;  
    }
    printf("The sum of each digit of given number is : %d",rev);
}