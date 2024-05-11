//Row and col sum 
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

    int r_sum = 0, c_sum = 0 ;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            {
                r_sum = r_sum + a[i][j];
                c_sum = c_sum + a[j][i];
            }
        printf("\n");
    }
    printf("| The Rowwise sum of the array is : %d |\n" ,r_sum);
    printf("| The Colwise sum of the array is : %d |" ,c_sum);
     
}
