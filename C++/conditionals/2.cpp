#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a: ";
    cin>>a;
    if(a>0) cout<<"positive";
    else if(a==0) cout<<"zero";
    else cout<<"negative";
    return 0;
}