#include<iostream>
using namespace std;
int main(){
int a,b,c;//a==b==c not allowed
cout<<"enter the three numbers: ";
cin>>a>>b>>c;
if(a==b&&b==c&&c==a){
    cout<<"all the numbers are equal to "<<a;
}
else{
if(a>b){
if(a>c){
cout<<a<<" is greatest among the three ";
} 
else{
    if(b>c){
        cout<<b<<" is greatest among the three";
    }
    else{
        cout<<c<<" is greatest among the three";
    }
}
}
else {
    cout<<c<<" is greatest among the three ";
}
}
return 0;
}