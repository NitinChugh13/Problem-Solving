#include<iostream>
using namespace std;
void linearsearch(int arr[],int size,int x){
    int found=0;
    for(int i=0;i<size;i++){
        if(x==arr[i]){
            found=1;
            cout<<"position of element is : "<<i+1;
            break;
        }    
    }
    if(found==0){
        cout<<"element not present";
    }
   }
   int main(){
    int arr[10];
    int n,x;
    cout<<"enter size:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be found:";
    cin>>x;
    linearsearch(arr,n,x);
    return 0;
   }