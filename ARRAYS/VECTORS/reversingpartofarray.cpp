#include<iostream>
#include<vector>
using namespace std;
void reverse_part(int i,int j, vector<int>& v){
        while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
        }
        return;
}
int main(){
    vector<int> v;
    int n;
    cout<<"enter the size:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    reverse_part(0,4,v);//i need to pass index from where i want to reverse it
    cout<<"reversed part array is :";
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }



}