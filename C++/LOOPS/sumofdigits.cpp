#include<iostream>
using namespace std;
int main(){
int n,sum=0,lastdigit;
cout<<"enter the value of n:";
cin>>n;
while(n!=0){
lastdigit=n%10;
sum=sum+lastdigit;
n=n/10;
}
cout<<"the sum of digits is: "<<sum<<endl;
}