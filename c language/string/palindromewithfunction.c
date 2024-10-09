#include<stdio.h>
#include<string.h>
int main(){
    char str1[50],str2[50];
    printf("enter the string :");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    if(strcmp(str1,str2)==0){
        printf("palindrome");
    }
    else {
        printf("not palindrome");
    }
    return 0;
}