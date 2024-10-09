#include<iostream>
using namespace std;
int main(){
    //  int n;
    // cout<<"enter size:";
    // cin>>n;
    int arr[5]={0,2,3,4,5};//sorted array of positive numbers 
    //smallest positive number is 0 than 1 2 3 ----
    int x=0,flag=0;
    for(int i=0;i<5;i++){
        if(arr[i]!=x){
        flag=1;
        cout<<"mising element is: "<<x<<endl;
        break;
        }
        else{
            x++;
        }
    }
    if(flag==0){
        cout<<x<<endl;
    }
    return 0;
}