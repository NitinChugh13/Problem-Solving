#include<iostream>
using namespace std;
int main(){
int r,c;
cout<<"enter number of rows and columns:";
cin>>r>>c;
for(int i=1;i<=r;i++){
 for(int j=1;j<=c;j++){
    cout<<char(i+64);//to print the same number
    
 }
 cout<<endl;
}
}