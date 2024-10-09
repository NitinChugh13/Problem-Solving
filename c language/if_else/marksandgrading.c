#include<stdio.h>
int main () {
    int marks;
    printf("enter the marks ");
    scanf("%d",&marks);

    if(marks<0||marks>100) {
        printf("wrong entry\n");
    }
    else if(marks<50) {
        printf("F\n");
    }
    else if(marks>=50 && marks<60){
        printf("D\n");
    }
    else if(marks>=60 && marks<=70) {
        printf("C\n");
    } 
     else if(marks>=70 && marks<80) {
        printf("B\n");
    }    
      else if(marks>=80 && marks<90) {
        printf("A\n");
    }   
         
      else if( marks<=90) {
        printf("A+\n");
    }    
     
    


      return 0;   
     }
   


