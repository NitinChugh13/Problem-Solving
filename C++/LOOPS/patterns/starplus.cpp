#include<iostream>
using namespace std;
int main(){
    int n,c;
    cout<<"enter the number of rows and columns:";
    cin>>n>>c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
            if(i==(n/2)+1||j==(n/2)+1){
                cout<<"*"<<" ";
            }
            else{
                cout<<" "<<" ";
            }
            
        }
        cout<<endl;
    }
}