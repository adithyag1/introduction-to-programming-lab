#include<stdio.h>
void main(){
    int a,b,c,d;
    printf("Enter dimensions of matrix1 as axb ");
    scanf("%dx%d",&a,&b);
    printf("Enter dimensions of matrix2 as cxd ");
    scanf("%dx%d",&c,&d);
    int m1[a][b],m2[c][d],prod[a][d];
    if(b!=c) printf("Invalid orders of matrix! cannot multiply");
    else{
        printf("Enter elements of matrix1 ");
        for(int row=0;row<a;row++){
            for(int col=0;col<b;col++){
                scanf("%d",&m1[row][col]);
            }
        }
        /*
        for(int row=0;row<a;row++){
            for(int col=0;col<b;col++){
                printf("%d\t",m1[row][col]);
            }
            printf("\n");
        }
        */
        
        printf("Enter elements of matrix2 ");
        for(int row=0;row<c;row++){
            for(int col=0;col<d;col++){
                scanf("%d",&m2[row][col]);
            }
        }
        for(int row=0;row<a;row++){
            for(int col=0;col<d;col++){
                int ele=0;
                for(int i=0;i<b;i++){
                    ele+=m1[row][i]*m2[i][row];
                    
                }
                //prod[row][col]=ele;
                printf("%d\t",ele);
            }
            printf("/n");
        }
        
    }
}
