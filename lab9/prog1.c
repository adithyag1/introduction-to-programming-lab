# include <stdio.h>

void main(){
    int x,y;
    printf("Enter x and y: ");
    scanf("%d %d",&x,&y);
    int *ptrx=&x,*ptry=&y;
    int temp=*ptrx;
    *ptrx=*ptry;
    *ptry=temp;
    printf("x=%d, y=%d",x,y);
}
