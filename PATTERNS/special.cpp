#include<iostream>
using namespace std;
int main(){
    int n,c,i=1;
    cout<<"enter the number of rows and columns :";
    cin>>n>>c;
  while(i<=n){
    //print space 
    int space =n-i;
    while(space){
        cout<<" ";
        space--;
    }
    //print first triangle
    int j=1;
    while(j<=i){
        cout<<j;
        j++;
    }
    //print second triangle 
    int start=i-1;
    while(start){
        cout<<start;
        start--;
    }

      cout<<endl;
      i++;
  }
    
}