#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int n;
    cout<<"enter number of students:";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<35){
            cout<<"roll number is :"<<i<<endl;
        }
    }
    return 0;
}