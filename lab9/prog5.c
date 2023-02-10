# include <stdio.h>

void swap(int *ptr1,int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
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
    for(int i=0;i<(len-1)/2;i++){
        swap(arr+i,arr+len-1-i);
    }
    printf("Reversed array: ");
    for(int i=0;i<len;i++){
        printf("%d ",*(arr+i));
    }
}
