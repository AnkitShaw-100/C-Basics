#include <stdio.h>
#include <math.h>
void main(){
    int n,i,j,z,k;
    printf("Enter the limit : ");
    scanf("%d",&n);
    int m = n-1;
    for(i=0;i<n;i++){ 
        for(k=0;k<m;k++){
            printf(" ");
        }
        printf("1");
    
        for(j=1;j<=i;j++){
            z = pow(11,j);
            
        }
        printf(" %d",z);
        m=m-1;
        j++;
        printf("\n");
    }
}