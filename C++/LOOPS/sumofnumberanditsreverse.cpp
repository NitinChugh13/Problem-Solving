#include<iostream>
using namespace std;
int main(){
int n,lastdigit,r=0,m;
cout<<"enter the value of n:";
cin>>n;
m=n;
while(n!=0){
lastdigit=n%10;
r=r*10;
r=r+lastdigit;
n=n/10;
}
cout<<"the sum of number and its reverse is: "<<(r+m)<<endl;
}