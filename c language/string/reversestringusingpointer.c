#include <stdio.h>
#include<string.h>
void reverse_string(char* str){
    char* start=str;
    char* end=str+strlen(str)-1;
    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main() {
    char str[100];
    printf("enter a string:");
    scanf("%s",str);
    reverse_string(str);
    printf("reversed string :%s ",str);
    
     
    return 0;
}
