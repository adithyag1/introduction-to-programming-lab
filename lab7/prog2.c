#include<stdio.h>
void main(){
    int n;
    printf("Enter the order of square matrix: ");
    scanf("%d",&n);
    float arr[n][n];
    printf("Enter elements of square matrix\n");
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            scanf("%f",&arr[row][col]);
        }
    }
    float det=1;
    for(int i=0;i<n;i++){
        if(arr[i][i]==0){
            det=0;
            goto label;
        }
    }
    for(int i=1;i<n;i++){
        for(int j=i;j<n;j++){
            int ratio=arr[j][i-1]/arr[i-1][i-1];
            for(int k=0;k<n;k++){
                arr[j][k]-=ratio*arr[i-1][k];
            }
        }
    }

    for(int i=0;i<n;i++){
        det*=arr[i][i];
    }
label:
    printf("Det=%f",det);
}
