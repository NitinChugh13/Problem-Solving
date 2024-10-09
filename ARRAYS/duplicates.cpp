#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n,x,flag=0;
    cout<<"enter size of array:";
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=1;
                cout<<"duplicate elements are: "<<arr[i]<<endl;
                break;
            }
        }     
    }
    if(flag==1){
            cout<<"duplicates are present!!";
        }
        else{
            cout<<"no duplicates";
        }
   

} 