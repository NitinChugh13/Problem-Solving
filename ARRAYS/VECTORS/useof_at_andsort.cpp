#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<int>v;
v.push_back(1);
v.push_back(19);
v.push_back(16);
v.push_back(10);
// cout<<v[1]<<endl;
// cout<<v.at(1);// at is used same as v[i]
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}
cout<<endl;
//use of sort is to sort the array in single step
//     sort(v.begin(),v.end());
//     for(int i=0;i<v.size();i++){
//     cout<<v.at(i)<<" ";
// }
 sort(v.end(),v.begin());
 for(int i=0;i<v.size();i++){//segmentation fault
    cout<<v.at(i)<<" ";
}
}