//to print n intergers dynamically
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter the number of intergrs :");
    scanf("%d",&n);
    int*ptr=(int*)malloc(n*sizeof(int));//this allocates memory in the heap
    int*p=ptr;//because ptr will be lost 
    int*t=ptr;
    //taking input
    for(int i=1;i<=n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    //printing
    for(int i=1;i<=n;i++){
        printf("%d ",*p);
        p++;
    }
    free(t);//deallocating memory
    ptr=NULL;//known as dangling ponter has to set to null because it remains to point the memory which is now freed by us 
    
    return 0;
}