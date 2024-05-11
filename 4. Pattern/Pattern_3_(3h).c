#include <stdio.h>
void main(){
    int n,i,j,k=65,m=3;
    printf("Enter the limit : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
             printf("%c",k);
             k++;
        }
        k = k-m;
        m--;
        printf("\n");
    }
}