# include <stdio.h>
#include<string.h>

void main(){
    char st[50];
    printf("Enter the string: ");
    scanf("%s",st);
    int flag=0;
    for(int i=0;i<(strlen(st)-1)/2;i++){
        if(*(st+i)!=*(st+strlen(st)-1-i))
            flag=1;
            break;
    }
    if(flag)
        printf("Not a palindrome");
    else
        printf("Palindrome");
}
