#include<iostream>
using namespace std;
int main(){
    int n,i=1,p;
    cout<<"enter the number of rows";
    cin>>n;
    //print first triangle
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<j;
    }
    //print star
    //  for (int k = 1; k <= 2 * i; k++) {
    //         cout << "*";
    //     }
    for(int j=1;j<=i;j++){
            cout<<"**";
        }

     

    for(int k=n-i+1;k >=1;k--){
            cout<<k;
        }
    cout<<endl;
   }
    
}