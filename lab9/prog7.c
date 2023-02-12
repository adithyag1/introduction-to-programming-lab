#include<stdio.h>
#include<string.h>

typedef struct{
    int day;
    int month;
    int year;
}date;

typedef struct{
    int doorno;
    char line1[50];
    char line2[50];
    int pincode;
}address;

typedef struct{
    int empid;
    char name[25];
    date dob;
    date doj;
    address caddress;
    char dgn[25];
    int salary;
}employee;

int i=0;

void main(){
    employee arr[5];
    int choice=3;
    while(choice!=0){
        printf("\nEnter 1 to add record\nEnter 2 to view record\nEnter 0 to quit\nChoice:");
        scanf("%d",&choice);
        switch(choice){
            case 0:
                break;
            case 1:
                printf("Enter Employee details:\n");
                printf("Empid: "); scanf("%d",&arr[i].empid);
                printf("Name: "); scanf("%s",arr[i].name);
                printf("DOB: "); scanf("%d/%d/%d",&arr[i].dob.day,&arr[i].dob.month,&arr[i].dob.year);
                printf("DOJ: "); scanf("%d/%d/%d",&arr[i].doj.day,&arr[i].doj.month,&arr[i].doj.year);
                printf("Address:\n");
                printf("Door no: "); scanf("%d",&arr[i].caddress.doorno);
                printf("Line 1: "); scanf("%s",arr[i].caddress.line1);
                printf("Line 2: "); scanf("%s",arr[i].caddress.line2);
                printf("PINCODE: "); scanf("%d",&arr[i].caddress.pincode);
                printf("Designation: "); scanf("%s",arr[i].dgn);
                printf("Salary: "); scanf("%d",&arr[i].salary);
                i++;
                break;
            case 2:
                printf("Enter employee id: ");
                int id,found=0;
                scanf("%d",&id);
                for(int j=0;j<i;j++){
                    if(arr[j].empid==id){
                        found=1;
                        printf("Record found.\n");
                        printf("Empid=%d\nName=%s\nDOB=%d/%d/%d\nDOJ=%d/%d/%d\nAddress={%d,%s,%s,%d}\nDesignation=%s\nSalary=%d}\n",arr[j].empid,arr[j].name,arr[j].dob.day,arr[j].dob.month,arr[j].dob.year,arr[j].doj.day,arr[j].doj.month,arr[j].doj.year,arr[j].caddress.doorno,arr[j].caddress.line1,arr[j].caddress.line2,arr[j].caddress.pincode,arr[j].dgn,arr[j].salary);
                        break;
                    }
                }
                if(!found)
                    printf("Record not found.");
                break;
            default:
                printf("Invalid choice.");
                break;
        }
    }
}
