# include <stdio.h>
void swap(int *ptr1,int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void main(){
    int x,y;
    printf("Enter x and y: ");
    scanf("%d %d",&x,&y);
    swap(&x,&y);
    printf("x=%d, y=%d",x,y);
}
