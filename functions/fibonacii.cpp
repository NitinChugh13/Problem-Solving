#include<iostream>
using namespace std;
int fib(int n){
if(n==1) return 0;
if(n==2) return 1;
return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    // int ans =fibonacii(n);
    // cout<<ans;
    for(int i=1;i<=n;i++){
        cout<<fib(i)<<endl;
    }
}