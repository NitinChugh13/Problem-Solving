//vectors are called dynamic array 
//arrays have fixed size 
//to resolve this problem we use vectors 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;// u need not to mention size
    //since i have not given size 
    //v[0]=6 i cant use this initialization 
    //do not use [] to input or insert elements use push back
    //u can use [] to update or access the value 
    v.push_back(6);//6
    cout<<v.size()<<endl;//to print size 1
    cout<<v.capacity()<<endl;//size and capacity both are different 1
    v.push_back(1);//6 1
    cout<<v.size()<<endl;//to print size 2
     cout<<v.capacity()<<endl;//size and capacity both are different 2 
    v.push_back(9);//6 1 9 
    cout<<v.size()<<endl;//to print size 3
     cout<<v.capacity()<<endl;//size and capacity both are different 4
    v.push_back(0);//6 1 9 0
     cout<<v.capacity()<<endl;//size and capacity both are different 4
    cout<<v.size()<<endl;//to print size 4
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" "<<endl;
// capacity tells that the total elements that can be added after doubling the size
// size tells the number of elements present in array
//printing using vector
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
//concept of pop_back
v.pop_back();//removes the last element and size is updated according to pop back 
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
//once the capacity is given it do not changes but size changes accordingly
}