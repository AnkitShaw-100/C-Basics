// ******
//  *****
//   ****
//    ***
//     **
//      *


#include<stdio.h>
void main(){
    int i,j,k,n,c=0;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(k=0;k<=i-1;k++){
            printf(" ");
        }
            for(j=c;j<=n;j++){
               printf("*");
            }
            c++;
        printf("\n");
    }
}