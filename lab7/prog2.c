#include<stdio.h>
void main(){
    int arr[3][3];
    printf("Enter elements of 3x3 matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Determinant=%d",arr[0][0]*(arr[1][1]*arr[2][2]-arr[1][2]*arr[2][1])-arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]));
}
