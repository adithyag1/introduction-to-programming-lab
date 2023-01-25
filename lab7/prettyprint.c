for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            arr[row][col]=arr[row][n-1-col];
            printf("%f\t",arr[row][col]);
            }
        printf("\n");
    }
