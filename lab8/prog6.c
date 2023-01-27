#include<stdio.h>
int lcm(int a,int b){
    static int mult=1;
    if(b%a==0){
        return b;
    }
    else{
        return lcm(a,b*(mult+1)/mult);
    }
}
void main(){
    int x,y;
    printf("Enter the numbers: ");
    scanf("%d %d",&x,&y);
    printf("LCM=%d",lcm(x,y));
}
