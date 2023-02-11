#include <stdio.h>;
#include<string.h>;

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

void main(){
    employee arr[2]={
        {1,"Naren",{12,10,1999},{1,8,2022},{15,"Golden Apartments, 6th street, Radha Nagar","Chrompet,Chennai,Tamil Nadu",600044},"Assistant Manager",60000},
        {2,"Divya",{17,12,1990},{6,7,2013},{8,"LMG Towers, Flower street, Perumal Nagar","Old Pallavram,Chennai,Tamil Nadu",600117},"Manager",100000}
                    };
    printf("Enter employee id: ");
    int id,found=0;
    scanf("%d",&id);
    for(int i=0;i<5;i++){
        if(arr[i].empid==id){
            found=1;
            printf("Record found.\n");
            printf("Employee details:\nEmpid: %d\nName: %s\nDOB: %d/%d/%d\nDOJ: %d/%d/%d\nAddress: %d, %s, %s, PIN %d\nDesignation: %s\nSalary: %d",\
            arr[i].empid,arr[i].name,arr[i].dob.day,arr[i].dob.month,arr[i].dob.year,arr[i].doj.day,arr[i].doj.month,arr[i].doj.year,arr[i].caddress.doorno,arr[i].caddress.line1,arr[i].caddress.line2,arr[i].caddress.pincode,arr[i].dgn,arr[i].salary);
        }
    }
    if(!found)
        printf("Record not found.");
}
