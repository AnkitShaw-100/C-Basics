//Check two matrix are same or not 
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
    
    int k,l;
    printf("Enter the row of the  2nd array : ");
    scanf("%d",&k);
    printf("Enter the col of the 2nd array : ");
    scanf("%d",&l);
    
    int b[k][l]; // Declaring array b

    //Accepting integers for b
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("Enter The elements of 2nd array : ");
            scanf("%d",&b[i][j]);
        }
    }
    int p=0;
    //Printing the 2nd array b 
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    if (n != k || m != l) 
    {
        printf("Matrices cannot matched they are already different.\n");
    } 
    else 
    {
        int c[n][m];  //Sum of both array    
        
        for(i=0;i<k;i++)
        {
            for(j=0;j<l;j++)
            {
                if (a[i][j] == b[i][j])
                continue;
                
                else 
                {
                    p++; 
                }
            }            
        } 
    }
    if (p == 1)
    {
        printf("Given array are not same. ");
    }
    else
    {
        printf("Given array are totally same. ");
    }
}

