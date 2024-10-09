#include<iostream>
using namespace std;
int main(){
    int n,c,a=65;
    cout<<"enter the number of rows and columns :";
    cin>>n>>c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(a)<<" ";
            a++;
        }
        cout<<endl;
    }
    
}