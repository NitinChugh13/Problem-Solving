#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int>&v1 , vector<int>&v2){// a function returning vector 
    int n=v1.size();
    int m=v2.size();
   vector<int> res(n+m);
   // three pointer algrithm 
    int i=0;// v1
    int j=0;//v2
    int k=0;//res
    while(i<=n-1&&j<=m-1){
        if(v1[i]<v2[j]){
        res[k]=v1[i];
        k++;
        i++;
        }
        else{//v2[j]<v1[i]
        res[k]=v2[j];
        k++;
        j++;
        }

    }
    //for remaining elements 
    if(i==n){// v1 ke sare elements khatam ho chuke h 
        while(j<=m-1){
            res[k]=v2[j];
            j++;
            k++;
        }
    }
    if(j==m){//v2 ke sare elements khatam ho chuke ha
    while(i<n-1){
        res[k]=v1[i];
        k++;
        i++;
    }

    }
    return res;

}
int main(){
    vector<int>arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<"  ";
    vector<int>arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);
    arr2.push_back(12);
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    vector<int>v= merge(arr1,arr2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}