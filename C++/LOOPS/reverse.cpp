#include<iostream>
using namespace std;
int main(){
int n,lastdigit,r=0;
cout<<"enter the value of n:";
cin>>n;
while(n!=0){
lastdigit=n%10;
r=r*10;
r+=lastdigit;
n=n/10;
}
cout<<"the reverse of number is: "<<r<<endl;
}