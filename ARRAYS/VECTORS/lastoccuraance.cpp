 #include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>v;
int idx=-1;
int n;
cout<<"enter the number of elelments:";
cin>>n;
cout<<"enter the elements: ";
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    v.push_back(x);
}
for(int i=0;i<n;i++){
   cout<<v[i]<<" ";
}
cout<<endl;
int y;
cout<<"enter the element:";
cin>>y;
for(int i=0;i<n;i++){
    if(v[i]==y){
        idx=i;
    }
}      
cout<<"the last occurrance is at index: " <<idx;


}