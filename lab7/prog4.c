#include<stdio.h>
void main(){
    int m,n;
    printf("Enter order of matrix A as mxn");
    scanf("%dx%d",&m,&n);
    int A[m][n],B[m][n];
    printf("Enter matrix A elements\n");
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            scanf("%d",&A[row][col]);
        }
    }
    for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            B[row][col]=A[row][n-1-col];
            printf("%d\t",B[row][col]);
            }
        printf("\n");
    }
}
