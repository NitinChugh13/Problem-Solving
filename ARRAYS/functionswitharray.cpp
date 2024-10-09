#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
void printingarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n]={0};
    int brr[n]={5};
    int crr[n];
    int drr[n];
    int err[n];
    printingarray(arr,n);
    printingarray(brr,n);
    printingarray(crr,n);
    for(int i=0;i<n;i++){
        drr[i]=5;
    }
    int arrsize=sizeof(arr)/sizeof(int);
    cout<<"size of arr is:  "<<arrsize<<endl;//number of elements in an array
    int brrsize=sizeof(brr)/sizeof(int);//only 5 is present but it shows size 10 on printing 
    //hence we need to pass size in the function along with array
    cout<<"size of brr is:  "<<brrsize<<endl;

    printingarray(drr,n);
    std::fill(err,err+n,7);
    printingarray(err,n);
    return 0;
}