#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n,p=1;
    cout<<"enter size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"product is:";
     for(int i=0;i<n;i++){
    p=p*arr[i];
    }
    cout<<p;

}