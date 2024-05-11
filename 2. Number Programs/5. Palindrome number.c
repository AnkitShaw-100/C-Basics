//Palindrome number 
#include<stdio.h>
void main()
{
    int n, m, r, rev =0 ;
    printf("Enter a number : ");
    scanf("%d",&n);
    m = n;
    while (n>0)
    {
        r = n % 10;
        rev = (rev * 10) + r  ;
        n = n / 10;
    }
    if (rev == m )
    {
        printf("Entered number is Palindrome number ");
    }
    else 
    {
        printf("Entered number is NOt a Palindrome number ");
    }
}