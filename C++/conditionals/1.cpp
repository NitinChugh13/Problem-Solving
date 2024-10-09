#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter a and b \n";//to input space use cin.get() 
cin>>a>>b;
cout<<"the value of a and b are  "<<a<<" "<<b<<endl;
if(a>b){
    cout<<"a is greater than b\n";
}else{
    cout<<"b is greater than a\n";
}
return 0;
}