#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<"  ";//combination of ulta and sidha star triangle 
        }
        for(int j=1;j<=i;j++){
      cout<<"* ";        
 
         }
         cout<<endl;
    }
}
