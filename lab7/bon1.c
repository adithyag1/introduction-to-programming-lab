#include<stdio.h>
void main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter list of numbers: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    while(1){
        int cols;
        printf("Enter number of columns: ");
        scanf("%d",&cols);
        if(cols==0) break;
        int rows=(n-1)/cols+1;
        int arr2[rows][cols];
        int i=0;
        for(int col=0;col<cols;col++){
            for(int row=0;row<rows;row++){
                if(row==rows-1&&col>=cols-(rows*cols-n)){
                    arr2[row][col]=00;
                }
                else{
                    arr2[row][col]=arr[i];
                    i++;
                }
            }  
        }
        printf("Row sums: ");
        for(int row=0;row<rows;row++){
            int rowsum=0;
            for(int col=0;col<cols;col++){
                rowsum+=arr2[row][col];
            }
           printf("%d ",rowsum);
        }
        printf("\n************************************************\n");
    }
}
