#include<stdio.h>
int move(int pos,int m,int n,int arr[]){
    int count=0;
    while(count<m){
        if(pos==n) pos=0;
        pos++;
        if(arr[pos-1]) count++;
    }
    return pos;
}

void display(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d ",arr[i]);
    }
}

void main(){
    int n,m;
    printf("Enter n and m values: ");
    scanf("%d %d",&n,&m);
    int ducks[n],order[n];
    for(int i=0;i<n;i++){
        ducks[i]=i+1;
    }
    int pos=0,ord=1;
    while(ord<=n){
        pos=move(pos,m,n,ducks);
        ducks[pos-1]=0;
        order[pos-1]=ord;
        ord++;
    }
    display(order,n);
}
