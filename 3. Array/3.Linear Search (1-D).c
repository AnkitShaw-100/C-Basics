//Linear Search and printing Frequency
#include<stdio.h>

void main()
{
    int n = 0;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n],key = 0, i,c = 0;
    
    // Accepting integers
    for(i = 0; i < n; i++)
    {
       printf("Enter the element of array: ");
       scanf("%d", &a[i]);  
    }
    
    //Accepting Search value 
    printf("Enter the search value : ");
    scanf("%d",&key);

    // Checking the elements
    for(i = 0; i < n; i++)
    {
        if(key == a[i])
        {
           printf("Search value found at : %d ", i+1);
           c++;
           printf("\n");
        }
        else
        {
            printf("Search value not found ! ");
            printf(" \n ");        
        }
        
    }
    printf("Search value found %d times ",c);
}

