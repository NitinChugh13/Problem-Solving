#include<iostream>
#include<vector>
using namespace std;
int main(){
// vector<int>v;
// //when size is not specified
// for(int i=0;i<5;i++){
//     int x;
//     cin>>x;
//     v.push_back(x);
// }
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
//when size is specified
vector<int>v(5);
for(int i=0;i<5;i++){
  cin>>v[i];
}
for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
}

}