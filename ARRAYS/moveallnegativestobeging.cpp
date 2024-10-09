#include<iostream>
#include<vector>
using namespace std;
void move(vector<int>&v){
 int n=v.size();
 int i=0; int j=n-1;
 while(i<j){
    if(v[i]<0) i++;
    if(v[j]>0) j--;
    else if(v[i]>0 && v[j]<0) {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    } 
 }   
 }
 int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(9);
    v.push_back(-90);
    v.push_back(-10);
    v.push_back(-9);
    v.push_back(-8);
    v.push_back(7);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    move(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    
    
 }
