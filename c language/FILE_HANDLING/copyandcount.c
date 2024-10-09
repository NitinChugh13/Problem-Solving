#include<stdio.h>
int main(){
    FILE*ptr=fopen("a.txt","r");
    if(ptr==NULL){
        printf("error");
        return 1;
    }
    FILE*dst=fopen("b.txt","w");
    int character;
    int count =0;
    while ((character=fgetc(ptr))!=EOF){
        fputc(character,dst);
        count++;
    }
if (ferror(ptr)) {
        printf("Error reading from source file");
    }

    fclose(ptr);
    fclose(dst);
    printf("copyed successfully \n the number of characters are :%d",count);
    return 0;

}