#include <stdio.h>

int digits(int n){
    if(n==0){
        return 0;
    }
    else return 1+digits(n/10);
}

void main() {
    // Write C code here
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Number of digits = %d",digits(num));
}
