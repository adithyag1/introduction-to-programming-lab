#include<stdio.h>

int n=0;

int found(int arr[][2],int id){
    int foun=0;
    for(int i=0;i<n;i++){
        if(arr[i][0]==id){
            foun=1;
            break;
        }
    }
    return foun;
}

int index(int arr[][2],int id){
    int ind=-1;
    for(int i=0;i<n;i++){
        if(arr[i][0]==id){
            ind=i;
            break;
        }
    }
    return ind;
}

void sort(int arr[][2]){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j][0]>arr[i][0]){
                for(int k=0;k<2;k++){
                    int temp=arr[j][k];
                    arr[j][k]=arr[i][k];
                    arr[i][k]=temp;
                }
            }
        }
    }
}


void insertion(int arr[][2]){
    int id;
    printf("Enter id number: ");
    scanf("%d",&id);
    if(!found(arr,id)){
        arr[n][0]=id;
        printf("Enter hourly wage: ");
        scanf("%d",&arr[n][1]);
        printf("Record saved successfully.\n");
        n++;
        sort(arr);
    }
    else printf("Id number already exists in the database.\n");
}

void deletion(int arr[][2]){
    int id,ind;
    printf("Enter the id number: ");
    scanf("%d",&id);
    if(found(arr,id)){
        ind=index(arr,id);
        for(int j=ind;j<n-1;j++){
            for(int k=0;k<2;k++){
                arr[j][k]=arr[j+1][k];
            }
        }
        n--;
        printf("Record deleted successfully.\n");
    }
    else printf("Record number not found.\n");
}

void modification(int arr[][2]){
    int id,ind;
    printf("Enter the id no: ");
    scanf("%d",&id);
    if(found(arr,id)){
        int ind=index(arr,id);
        int choice;
        printf("Enter 1 for modifiying employee id\nEnter 2 for modifiying hourly wage rate\nYour choice: ");
        scanf("%d",&choice);
        if(choice==1){
            printf("Enter new id number: ");
            scanf("%d",&arr[ind][0]);
            printf("Record modified successfully.\n");
            sort(arr);
        }
        else if(choice==2){
            printf("Enter new hourly wage: ");
            scanf("%d",&arr[ind][1]);
            printf("Record modified successfully.\n");
        }
        else{
            printf("Invalid choice. Enter only 1 or 2.\n");
        }
        
    }
    else printf("Record not found.\n");
}

void view(int arr[][2]){
    printf("Id No.\tH.Wage\n");
    for(int row=0;row<n;row++){
        for(int col=0;col<2;col++){
            printf("%d\t",arr[row][col]);
            }
        printf("\n");
    }
}

void main(){
    int arr[50][2];
    int choice=5;

    while(choice){
        printf("*********************************************************************\n");
        printf("Enter 1 for insertion\nEnter 2 for deletion\nEnter 3 for modification\nEnter 4 for viewing employee details\nEnter 0 to quit\nYour choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insertion(arr);
                break;
            case 2:
                deletion(arr);
                break;
            case 3:
                modification(arr);
                break;
            case 4:
                view(arr);
                break;
            case 0:
                choice=0;
                break;
            default:
                printf("Invalid choice. Enter only 0,1,2,3 or 4.\n");
        }
        printf("*********************************************************************\n\n");
    }
}
