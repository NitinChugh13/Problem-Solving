#include<stdio.h>
int changing(int*);
int changing(int* a){
    *a=*a*10;
    printf("the value of a becomes %d\n",*a);//to change the value in main function also i need to use pass by refernce 
    return *a;
}
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    changing(&n);
    printf("the value of n becomes %d",n);
    return 0;
}
