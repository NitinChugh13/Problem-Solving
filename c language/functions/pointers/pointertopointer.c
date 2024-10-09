//to store address of a pointer in another pointer
//note---->star se & kat jata hai 
//example--->***&&&a=value of a
//**&a=value of a *&&a=address of a
#include<stdio.h>
int main(){
    int i=10;
    int*j=&i;//stores address of i
    int**k=&j;//stores address of j pointer
    int***p=&k;//stores addres  of k pointer
    printf("the value of i is :%d\n",i);//prints value of i
    printf("the value of i is :%d\n",*(&i));//prints value of i
    printf("the value of i is :%d\n",*(*&j));//prints value of i
    printf("the value of i is :%d\n",**(&j));//prints value of i
    printf("the address of i is :%d\n",j);//prints address 
    printf("the address of i is :%d\n",&i);//prints address 
    printf("the address of j is :%d\n",k);//prints address 
    printf("the address of j is :%d\n",&j);//prints address 
    printf("the address of k is :%d\n",p);//prints address of k
    printf("the address of i is :%d\n",&k);//prints address of k
}