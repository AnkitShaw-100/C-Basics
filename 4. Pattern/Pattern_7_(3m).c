#include <stdio.h>
void main(){
    int n,i,j,z,k;
    printf("Enter the limit : ");
    scanf("%d",&n);
    int m = n-1;
    for(i=0;i<n;i++){ 
        for(k=0;k<m;k++){
            printf(" ");
        }

        for(j=1;j<=i+1;j++){
            printf("%d",j);
        }

        for(z=j-2;z>0;z--){
            printf("%d",z);
        }
        printf("\n");
        m=m-1;
    }
}