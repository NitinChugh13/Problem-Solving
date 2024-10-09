#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
int n,r;
cout<<"enter the number:";
cin>>n;
cout<<"enter r:";
cin>>r;
int combination=factorial(n)/(factorial(r)*factorial(n-r));
int permutation=factorial(n)/(factorial(n-r));
cout<<"the comination is: "<<combination<<endl;
cout<<"the permutation is: "<<permutation<<endl;
return 0;

}