# include <stdio.h>

void revarr(int *arrend,int len){
    if(len==1)
        printf("%d ",*arrend);
    else{
        printf("%d ",*arrend);
        revarr(arrend-1,len-1);
    }
}

void main(){
    int len;
    printf("Enter number of array elements: ");
    scanf("%d",&len);
    int arr[len];
    printf("Enter array elements: ");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    //printf("%d %d",*arr,*(arr+1));
    revarr(arr+len-1,len);
}
