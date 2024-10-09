#include<stdio.h>
int main(){
    // char str[100];
    // FILE*ptr=fopen("Nitin.txt","w");
    // while(fgets(str,50,ptr)!=NULL){
    //     printf("%s",str);
    // }
    FILE*ptr=fopen("NC.txt","w");
    char str[]="honesty is the best policy";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}