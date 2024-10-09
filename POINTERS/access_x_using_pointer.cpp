#include<iostream>
using namespace std;
int main(){
    int x=10;
    int* p=&x;
    cout<<p<<endl;
    cout<<&x<<endl;
    cout<<*p<<endl;//derefernce operator pointing the value of x
    *p=50;//use pointer to update the value of x at same address 
    cout<<x<<endl;

}