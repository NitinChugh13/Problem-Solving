#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"enter the number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        a=4;
        for(int j=1;j<=i;j++){
            cout<<a;
            a--;
            
        }
        cout<<endl;
    }
}