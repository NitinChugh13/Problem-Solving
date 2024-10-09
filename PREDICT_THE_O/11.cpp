#include<iostream>
using namespace std;
int main(){
    int a=15;
    int *ptr=&a;
    // int b=++(*ptr);
    // cout<<a<<" "<<b<<endl;
     int c=(*ptr)++;//imp phle locate hogi phir bdegi
    cout<<c<<endl;
    cout<<a;
    }