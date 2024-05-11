// Ternary Operator for two variables
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,max;
    printf("\n Enter a numbers : ");
    scanf("%d",&a);
    printf("\n Enter another numbers : ");
    scanf("%d",&b);
    max = (a>b)?a:b;
    printf("\n Max numbers = %d",max);
    getch();
}


