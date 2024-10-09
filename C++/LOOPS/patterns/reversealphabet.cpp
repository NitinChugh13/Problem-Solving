#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";//on single spce it gives triangle 
        }
         for(int j=1;j<=i;j++){
         cout<<char(j+64);        
 
         }
         cout<<endl;
    }
}