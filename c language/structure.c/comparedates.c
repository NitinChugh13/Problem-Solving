#include<stdio.h>
#include<string.h>
struct DATE{
    int date;
    char month[50];
    int year;
}s[2];
int main(){
    for(int i=0;i<2;i++){
    printf("enter date: ");
    scanf("%d",&s[i].date);
    printf("enter month:");
    scanf("%s",s[i].month);
    printf("enter year:");
    scanf("%d",&s[i].year);
}
    if(s[0].date==s[1].date&&strcmp(s[0].month,s[1].month)==0&&s[0].year==s[1].year){
    printf("EQUAL");
    }
    else{
        printf("UNEQUAL");
    }
return 0;
}