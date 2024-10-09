//1
//12
//123
//1234
//12345
#include<stdio.h>
int main(){
    int n,a;
    printf("enter the number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);//for any pattern
            a++;        
        }                //check number of line 
        printf("\n");
                           // what is happening 
    }   
    return 0;

}