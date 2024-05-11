//Transpose of a matrix 
#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter the row of the array : ");
    scanf("%d",&n);
    printf("Enter the col of the array : ");
    scanf("%d",&m);

    int a[n][m],i,j; // Declaring array a
    
    //Accepting integers a
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Enter The elements of array : ");
            scanf("%d",&a[i][j]);
        }
    }

    //Printing the array a
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    //Transpose  
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            a[i][j] == b [j][i] ;
        }
        printf("\n");
    }    
}
