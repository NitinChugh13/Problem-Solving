#include<stdio.h>
int main(){
    char str[50];
    int length=0,flag=0;
    printf("enter the string:");
    scanf("%s",str);
    while(str[length]!='\0'){
        length++;
    }
    for(int i=0;i<length;i++){
        if(str[i]!=str[length-i-1]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("string is palindrome");
    }
    else{
        printf("string is not palindrome");
    }

    return 0;
}