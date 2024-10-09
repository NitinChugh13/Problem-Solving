#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[10];
    int n;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    cout<<"sum of elemnts is: "<<sum(arr,n);
    return 0;
}