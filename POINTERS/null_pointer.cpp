#include<iostream>
using namespace std;
int main(){
    int* ptr=NULL;//RESERVED ADDRESS 
    int* p=0;
    int* q='\0';
    cout<<q<<endl;//0
    cout<<p<<endl;//0
    cout<<ptr;//0x0 or 0 special reserved address 
}