#include<iostream>
using namespace std;
int main(){
int n,flag=0;
cout<<"enter a number:";
cin>>n;
if(n==1||n==0){
    cout<<n<<" is neither prime nor composite!!";
}
else{
for(int i=2;i<=n-1;i++){
    if(n%i==0){
    flag=1;
    break;
    }  
}
if(flag==1){
    cout<<n<<" is a composite number";
}
else{
    cout<<n<<" is a prime number";
}
}
}