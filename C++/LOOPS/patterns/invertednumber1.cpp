#include<iostream>
using namespace std;
int main(){
    int n,p;
    cout<<"enter the number of rows:";
    cin>>n;
    p=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=p;j++){
            cout<<i;
            
        }
        p--;
        cout<<endl;
    }
}