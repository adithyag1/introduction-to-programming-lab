#include <stdio.h>

int factorial(int n){
    if(n==0){
        return 1;
    }
    else return n*factorial(n-1);
}

int main() {
    // Write C code here
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    int dummy=num+0,sum=0;
    for(;dummy;dummy/=10){
        int digit=dummy%10;
        sum+=factorial(digit);
    }
    if(sum==num){
        printf("Strong number");
    }
    else{
        printf("Not a strong number");
    }
    return 0;
}
