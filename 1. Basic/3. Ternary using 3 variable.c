//// Ternary Operator for three variables
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,max;
    printf("\n Enter first numbers : ");
    scanf("%d ",&a);
    printf("\n Enter second numbers : ");
    scanf("%d ",&b);
    printf("\n Enter third numbers : ");
    scanf("%d ",&c);
    max = (a>b && a>c)?a:(b>c && b>a)?b:c;
    printf("\n Max numbers = %d",max);

}


