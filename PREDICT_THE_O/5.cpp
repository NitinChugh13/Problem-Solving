#include<iostream>
using namespace std;
int main(){
    int a=1;
    int b=2;
    if(a-->0||++b>2){//since firat condition is true so next condition is not evaluated
        cout<<"stage1 - inside if "<<endl;
    }
    else{
        cout<< "stage2 - inside else"<<endl;
    }
    cout<<a<<" "<<b<<endl;//hence its  otput is 0 2 not 0 3

}