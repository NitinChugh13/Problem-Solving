#include<stdio.h>
#include<string.h>
struct student {
    char name[50];
    int rollnumber;
    float marks;
}s[5];
int main(){
    printf("enter the details of students :\n");
    for(int i=0;i<5;i++){
        printf("enter the name:");
        scanf("%s",s[i].name);
        printf("enter the roll number:");
        scanf("%d",&s[i].rollnumber);
        printf("enter the marks :");
        scanf("%f",&s[i].marks);
    }
printf("displaying the details of students \n");
for(int i=0;i<5;i++){
    printf("NAME=%s\n",s[i].name);
    printf("ROLL NUMBER=%d\n",s[i].rollnumber);
    printf("MARKS=%f\n",s[i].marks);
}
return 0;
}