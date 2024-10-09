#include<iostream>
using namespace std;
void update(int arr[],int size){
    cout<<"array inside update function::";
    arr[0]=120;
    for(int i=0;i<size ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;//arr[] passes the address od element in the function
    //therefore the change in function reflects in main function also
}
int main(){
int arr[3]={1,2,3};
// int n;
// cout<<"enter the size of array:";
// cin>>n;
// for(int i=0;i<3;i++){
//   cin>>arr[i];
// }
cout<<endl;
update(arr,3);
cout<<"array inside main function::";
for(int i=0;i<3;i++){
  cout<<arr[i]<<" ";//120 2 3 chane is reflected in main function also unlike pass by value in variables 
}
cout<<endl;

}