#include<iostream>
using namespace std;
int main(){
    int n,c;
    cout<<"enter the number of rows and columns :";
    cin>>n>>c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            //  char ch='A'+i-1;
            cout<<char(i+64);
        }
        cout<<endl;
    }
    
}