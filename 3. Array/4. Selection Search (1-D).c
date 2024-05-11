//Selection sort 
#include<stdio.h>
void main()
{
    int n=0;
    printf("Enter the size of array :");
    scanf("%d",&n);
    
    int a[n],i,j,t;
    
    //Accepting integers
    for(i=0; i<n; i++)
    {
        printf("Enter the elements of array :");
        scanf("%d",&a[i]);
    }

    //Sorting
    for(i=0; i<n; i++)
    {
        for(j=i+1 ; j<i+1 ; j++ )
            {
                if(a[i]>a[j])
                {
                    t = a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
    }

    //Printing
     for(i=0; i<n; i++)
    {
        printf("Sorted elements of array : % d",a[i]);
        printf(" \n ");
        
    }

}