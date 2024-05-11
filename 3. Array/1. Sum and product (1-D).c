#include<stdio.h>

void main()
{
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n], i, sum = 0, multi = 1;

    // Accepting integers
    for(i = 0; i < n; i++)
    {
       printf("Enter the element of array: ");
       scanf("%d", &a[i]);  
    }

    // Printing the elements
    printf("Given elements of array are: ");
    for(i = 0; i < n; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");

    // Sum of even elements and product of odd elements
    for(i = 0; i < n; i++) 
    {
        if(a[i] % 2 == 0)
        {
            sum += a[i];
        }
        else
        {
           multi *= a[i];
        }    
    }
    printf("Sum of even elements: %d\n", sum);
    printf("Product of odd elements: %d\n", multi);  
}
