# include <stdio.h>
#include<string.h>

typedef struct{
    int rollno;
    char name[25];
    int total_mark;
    char result[5];
}student;

void main(){
    int n;
    printf("Enter number of records: ");
    scanf("%d",&n);
    student arr[n];
    int passed=0;
    for(int i=0;i<n;i++){
        printf("\nEnter student %d details\n",i+1);
        printf("Enter rollno: ");
        scanf("%d",&arr[i].rollno);
        printf("Enter name: ");
        scanf("%s",arr[i].name);
        printf("Enter total mark: ");
        scanf("%d",&arr[i].total_mark);
        if(arr[i].total_mark>35){
            strcpy(arr[i].result,"Pass");
            passed++;
        }
        else
            strcpy(arr[i].result,"Fail");
    }
    printf("\n%d people have passed.",passed);
}
