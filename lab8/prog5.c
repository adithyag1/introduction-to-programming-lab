#include<stdio.h>
void bin(int dec){
    if(dec==0||dec==1){
        printf("%d",dec);
    }
    else{
        bin(dec/2);
        printf("%d",dec%2);
    }
}
void main(){
    int n;
    scanf("%d",&n);
    bin(n);
}
