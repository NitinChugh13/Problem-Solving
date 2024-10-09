#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter number of rows:";
cin>>n;
for(int i=n;i>=1;i--){
 for(int j=1;j<=i;j++){
    cout<<char(j+64);//to print lower case alphabets
    
 }
 cout<<endl;
}
}