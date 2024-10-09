#include<iostream>
using namespace std;
int main(){
int n,f;
cout<<"enter a number:";
cin>>n;
// for(int i=1;i<=n;i++){
//   if(n%i==0){
//     cout<<i<<endl;//prints all the factor 
//   }
// }
//for highest factor except the number itself
for(int i=1;i<n;i++){
    if(n%i==0){
        f=i;
    }
}
cout<<"the highest factor of number "<<n<<" is : "<<f<<endl;
}