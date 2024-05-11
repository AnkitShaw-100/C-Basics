#include <stdio.h>
void main(){
    int n,i,j,k=65,m=1;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf(" %c",k);
            k++;
        }
        if(j>1){
            k = k - m;
            m++;
        }
        printf("\n");
    }
}