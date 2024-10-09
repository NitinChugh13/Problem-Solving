#include<iostream>
using namespace std;
int main(){
int n,m,r=0,lastdigit;
cout<<"enter a number";
cin>>n;
m=n;
while(n!=0){
lastdigit=n%10;
r=r*10;
r=r+lastdigit;
n=n/10;
}
// cout<<r<<endl;
if(m==r){
cout<<"PALINDROME";
}
else{
    cout<<"NOT PALINDROME";
}
}