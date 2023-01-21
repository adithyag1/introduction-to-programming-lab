#include<stdio.h>
#include<string.h>
void main(){
    int n;
    printf("Enter number of names ");
    scanf("%d",&n);
    char arr[n][25];
    printf("Enter names\n");
    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(strcmp(arr[j],arr[i])>0){
                char temp[strlen(arr[i])];
                strcpy(temp,arr[i]);
                strcpy(arr[i],arr[j]);
                strcpy(arr[j],temp);
            }
        }
    }
    printf("Names in alphabetical order:\n");
    for(int i=0;i<n;i++){
        printf("%s\n",arr[i]);
    }
}
