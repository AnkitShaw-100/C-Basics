//Sum of natural number till limit
#include<stdio.h>

void main()
{
    int n,i,sum = 0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("Sum of the number till the limit given is : %d ",sum);
}