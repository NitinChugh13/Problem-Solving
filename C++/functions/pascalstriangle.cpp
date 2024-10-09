#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int a,int b){

    int comb=factorial(a)/(factorial(b)*factorial(a-b));
     return comb;//in pascal triangle each term is combination of  iand j
}
int main(){
int n;
cout<<"enter the number of rows:";
cin>>n;
for(int i=0;i<=n;i++){
    for(int j=0;j<=i;j++){
        cout<<combination(i,j);
    }
    cout<<endl;
}
return 0;

}