//Count the total number of odd and even in the array
#include<stdio.h>
void main()
{
    int n,m;
    printf("Enter the row of the array : ");
    scanf("%d",&n);
    printf("Enter the col of the array : ");
    scanf("%d",&m);

    int a[n][m],i,j,even=0,odd=0; // Declaring array

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

    //Counting Even and Odd
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j] % 2 == 0)
            {
               even++;
            }
            else{
                odd++;
            }
        }
        printf("\n");
    }
    printf("Number of Even elements found are : %d \n", even);
    printf("Number of Odd elements found are : %d ", odd);
}