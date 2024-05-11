// Maximum between 3 three numbers
#include <stdio.h>
void main()
{
    //Acceepting Integer
    int a,b,c;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("Enter the 2st number : ");
    scanf("%d",&b);
    printf("Enter the 3st number : ");
    scanf("%d",&c);

    //Checking conditions
    if( ( a > b ) && ( a > c ) )
    printf("The largest number is : %d ",a);
    else if ( ( b > a ) || ( b > c ) )
    printf("The largest number is : %d ",b);
    else if ( ( c > a ) || ( c > a ) )
    printf("The largest number is : %d ",c);
    else
    printf("All number are same ");
    
    
}
