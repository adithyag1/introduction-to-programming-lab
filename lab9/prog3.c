# include <stdio.h>

void main(){
    int x=10;
    int *p=&x;
    printf("++*p=%d\n",++*p);
    printf("*p++=%d\n",*p++);
    printf("*++p=%d\n",*++p);
    printf("++*p*2=%d\n",++*p*2);
}
