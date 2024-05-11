//Example of GO-TO Statement
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a % 2 == 0)
    goto even;
    else
    goto odd;
    even:
    printf("Number is Even");
    odd:
    printf("Number is Odd");
}