#include<iostream>
#include<algorithm>
#include<vector>
void printarray(int arr[],int n){
    // int n;
    // cout<<"enter size of array:";
    // cin>>n;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
}
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n]={0};//0 0 0 0 0
    int brr[n]={5};//5 0 0 0 0
    int crr[n];//6422148 1777636954 12 32 4 garbage value 
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    printarray(arr,n);
    cout<<endl;
    // for(int i=0;i<n;i++){
       
    //     cout<<brr[i]<<" ";
    // }
    printarray(brr,n);
     cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<crr[i]<<" ";
    // }
    printarray(crr,n);
    cout<<endl;
    //to initialize an arry with all the same value 
    //5 5 5 5 5 5
    //using loop
     int drr[n];
    // for(int i=0;i<n;i++){
    //     arr[i]=5;
    //     cout<<arr[i]<<" ";
    // }
    printarray(drr,n);
    cout<<endl;
    //using std::fill(arr,arr+size,value )
    int err[n];
    std::fill(err,err+n,6);
    // for(int i=0;i<n;i++){
    //     cout<<err[i]<<" ";
    // }
    printarray(err,n);
    cout<<endl;
    //using std::vector mainly used in dynamic array
    vector<int> frr(n,7);
    //  for(int i=0;i<n;i++){
    //     cout<<frr[i]<<" ";
    // }
    //  printarray(frr,n);
    return 0;
}