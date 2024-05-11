//Reversing a array
#include<stdio.h>

void main()
{
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n], i;

    // Accepting integers
    for(i = 0; i < n; i++)
    {
       printf("Enter the element of array: ");
       scanf("%d", &a[i]);  
    }

    // Printing the elements in reverse 
    for(i = n-1; i >= 0; i--)
    {
       printf("%d ", a[i]);
    }
    printf("\n");
}
    