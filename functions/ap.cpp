#include<iostream>
using namespace std;
int nterm(int n){
int ans=(3*n)+7;
return ans;
}
int main(){
    int n;
    cout<<"enter n:";
    cin>>n;
    int ans= nterm(n);
    cout<<"the"<<" term is : "<<ans<<endl;
}