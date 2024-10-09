#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n,count=0,x;
    cout<<"enter size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    cout<<"enter a number:";
    cin>>x;
     for(int i=0;i<n;i++){
    if(arr[i]>x){
        count++;
    }
    }
    cout<<count;

}