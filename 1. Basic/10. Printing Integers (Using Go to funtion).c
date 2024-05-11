//Example of GO-TO Statement 2
#include<stdio.h>
void main()
{
    int n,i = 1;
    printf("Enter the limit : ");
    scanf("%d",&n);
    num:
    printf("Thge number is : %d \n",i);
    i++;
    if(i<=n)
    goto num;
}