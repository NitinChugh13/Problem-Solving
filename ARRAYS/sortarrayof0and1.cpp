// #include<iostream>
// #include<vector>
// using namespace std;
// void sort(vector<int> &v){
// int n=v.size();
// int no_of_zeroes=0;
// int no_of_ones=0;
// //pass 1 count number of zeroes and ones
// for(int i=0;i<n;i++){
//     if(v[i]==0) no_of_zeroes++;
//     else no_of_ones++;
// }
// //pass 2 filling 0 and 1 in sorted order that us first zeroes and than ones
// for(int i=0;i<n;i++){
//     if(i<=(no_of_zeroes-1)) v[i]=0;
//     else v[i]=1;
// }
// }
// int main(){
// // without using sort fuction
// // method 1 two passes 
// vector<int> v;
// v.push_back(1);
// v.push_back(0);
// v.push_back(0);
// v.push_back(0);
// v.push_back(1);
// v.push_back(1);
// v.push_back(0);
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }
// cout<<endl;
// sort(v);
// for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" ";
// }


// }
#include<iostream>// method 2 using two pointer method
#include<vector>
using namespace std;
void sort(vector<int> &v){
int n=v.size();
int i=0;//first pointer 
int j=n-1;// second pointer
while(i<j){                                          
    if(v[j]==1) j--;
    if(v[i]==0) i++;
    if(i>j) break;// most important condition
    if(v[i]==1&&v[j]==0){
        // int temp=v[i];
        // v[i]=v[j];
        // v[j]=temp;
        v[i]=0; v[j]=1;
        i++;
        j--;
    }
}

}
int main(){
    vector<int> v;
v.push_back(1);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(0);
v.push_back(1);
v.push_back(1);
v.push_back(0);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
sort(v);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}
// some more techniques 
// while(i<j){                                          
//     if(v[i]==1&&v[j]==0){
//         // int temp=v[i];
//         // v[i]=v[j];
//         // v[j]=temp;
//         v[i]=0; v[j]=1;
//         i++;
//         j--;
//        if(v[j]==1) j--;
//         if(v[i]==0) i++;
//     }
// }


// while(i<j){
//      if(v[j]==1) j--;
//         if(v[i]==0) i++; 
//    else  if(v[i]==1&&v[j]==0){
//          int temp=v[i];
//          v[i]=v[j];
//          v[j]=temp;
//         v[i]=0; v[j]=1;
//         i++;
//         j--;
//        
//     }
// }
