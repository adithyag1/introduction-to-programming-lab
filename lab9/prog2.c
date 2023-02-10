# include <stdio.h>

void main(){
    int iarr[5]={2,4,6,8,10};
    printf("\nint array\n");
    for(int i=0;i<5;i++){
        printf("%x\n",&iarr[i]);
    }
    float farr[5]={2,4,6,8,10};
    printf("\nfloat array\n");
    for(int i=0;i<5;i++){
        printf("%x\n",&farr[i]);
    }
    char carr[5]={2,4,6,8,10};
    printf("\nchar array\n");
    for(int i=0;i<5;i++){
        printf("%x\n",&carr[i]);
    }
    double darr[5]={2,4,6,8,10};
    printf("\ndouble array\n");
    for(int i=0;i<5;i++){
        printf("%x\n",&darr[i]);
    }
}
