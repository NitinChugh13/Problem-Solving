#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3};
    cout<<&arr[0]<<endl;//0x61ff04
    cout<<arr<<endl;// implies that address of array is same as tge address of its 0th element
    int* ptr= arr;//giving address
    cout<<ptr<<endl;//0x61ff04
    int* p=&arr[0];//0x61ff04
    cout<<p<<endl;
    // int* q=&arr;//error
    // int* q=arr[0];//error
    cout<<ptr[0]<<endl;//we can access elements using pointer also
    //pointer can have access to entire array by passing address of first element 
    for(int i=0;i<3;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    //another method of printing array
    for(int i=0;i<3;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;//otherwise it will point something else 
    //another method of printing array
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<i[ptr]<<" ";
    }


}