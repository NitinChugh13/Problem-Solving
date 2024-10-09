#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the size of array:";
cin>>n;
// int arr[n];//it is not a good practice
int arr[100];
for(int i=0;i<n;i++){
    cout<<"enter the "<<i+1<<" element of array:";
    cin>>arr[i];
}
int max=arr[0];
int min=arr[0];
//maximum
for(int i=0;i<n;i++){
    if(max<arr[i]){
        max=arr[i];
    }
}
cout<<"maximum element = "<<max<<endl;
for(int i=0;i<n;i++){
    if(min>arr[i]){
        min=arr[i];
    }
}
cout<<"minimum element = "<<min<<endl;

}