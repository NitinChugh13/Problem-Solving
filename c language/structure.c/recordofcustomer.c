#include<stdio.h>
#include<string.h>
struct customer{
    char name[50];
    int accountnumber;
    float balance;
}s[200];
int main(){
    int numcustomer;
    printf("enter the number of customers: ");
    scanf("%d",&numcustomer);
    printf("enter details of customer:\n");
    for(int i=0;i<numcustomer;i++){
    printf("enter name of customer:");
    scanf("%s",s[i].name);
    printf("enter account number:");
    scanf("%d",&s[i].accountnumber);
    printf("enter the balance:");
    scanf("%f",&s[i].balance);
    }
    printf("displaying details of customers having amount less than 100:\n");
    for(int i=0;i<numcustomer;i++){
        if(s[i].balance<100){
            printf("NAME=%s\n",s[i].name);
            printf("ACCOUNT NUMBER=%d\n",s[i].accountnumber);
            printf("BALANCE=Rs.%.2f\n",s[i].balance);
        }
    }
    return 0;
}