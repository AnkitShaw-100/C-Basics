//Finonacci Series
#include<stdio.h>
void main()
{
    int n, x=0,y=1,z=0;
    printf("Enter the limit : ");
    scanf("%d",&n);
    while(z <= n)
    {
        printf("\n %d",z);
        x=y;
        y=z;
        z=x+y;
    }
} 