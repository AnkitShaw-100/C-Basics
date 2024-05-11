// Adding all the digits of a given number
#include<stdio.h>

void main()
{
    int n,r,s=0;
    printf("Enter a digit : ");
    scanf("%d",&n);
    while(n>0)
    {
        r = n % 10;
        s = s + r;
        n = n / 10;  
    }
    printf("The sum of each digit of given number is : %d",s);
}