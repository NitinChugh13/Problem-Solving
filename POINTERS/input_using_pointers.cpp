#include<iostream>
using namespace std;
int main(){
    int x=10,y=20;
    int* p1=&x;
    int* p2=&y;
    cout<<"enter x:";
    cin>>*p1;
    cout<<"enter y:";
    cin>>*p2;
    cout<<"sum of x and y is :"<<(*p1+*p2)<<endl;
   // problem in syntax
//    int* q=&x,r=&y; error
//    cout<<q<<" "<<r;//error
        int* q=&x,r=y;// it is possible
// it means  r is acting as int
cout<<q<<" "<<r;
}