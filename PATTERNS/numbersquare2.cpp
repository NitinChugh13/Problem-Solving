#include<iostream>
using namespace std;
int main(){
int n,c,i=1,j,a=1;
cout<<"enter number of rows and columns:";
cin>>n>>c;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=c;j++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }using while loop
while(i<=n){
     j=1;
      while(j<=c){
        cout<<a<<" ";
        a++;
      }
      cout<<endl;
      i++;
}
}