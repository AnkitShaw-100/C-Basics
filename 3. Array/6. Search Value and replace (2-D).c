//Seach an element andd repalce it with 0
#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter the row of the array : ");
    scanf("%d",&n);
    printf("Enter the col of the array : ");
    scanf("%d",&m);

    int a[n][m],i,j; // Declaring array
    
    //Accepting integers
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter The elements of array : ");
            scanf("%d",&a[i][j]);
        }
    }

    //Printing the array
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     
    //Accepting search value 
    int search ;
    printf("Enter search value : ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j] == search)
            {
                 a[i][j] = 0;    
            }
            else
            {
                printf("Search value not found !! ");
            }
            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    
}