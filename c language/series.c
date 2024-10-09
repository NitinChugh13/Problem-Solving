#include<stdio.h>
int function(int N){
    if(N<=0){
        printf("%d ",N);
    }
    else{
        printf("%d ",N);
        function(N-5);
        printf("%d ",N);
    }
}
int main(){
    int N;
    printf("enter N: ");
    scanf("%d",&N);
    function(N);

}