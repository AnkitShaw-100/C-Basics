//FactoriaL till limit
#include<stdio.h>

void main()
{
    int n,i,fac = 1;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac = fac * i;
    }
    printf("Factorial of the number till the limit given is : %d ",fac);
}