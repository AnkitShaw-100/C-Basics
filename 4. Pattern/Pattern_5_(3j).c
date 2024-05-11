#include <stdio.h>
void main(){
    int n,i,j,k=65;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            printf(" %c",k);
            k=k+2;
        }
        k=65;
        printf("\n");
    }
}