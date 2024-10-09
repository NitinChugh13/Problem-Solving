#include<iostream>
using namespace std;
int main(){
int x=7;
int* ptr=&x;
cout<<ptr<<endl;//0x61ff08
ptr=ptr+1;//moves by 4 bytes//means moves by size of pointer type
cout<<ptr<<endl;//0x61ff0c
//0 1 2 3 4 5 6 7 8 9 a b c d e f
//                |4 steps|
int y=4;
int* p=&y;
cout<<*p<<endl;//4
p=p+1;
cout<<*p<<endl;//7 random value 

int z=4;
int* m=&z;
cout<<*m<<endl;//4
// *m=*m+1;
// *m++; // this will not increase the value of m due to improper syntax
(*m)++;//correct way to use increment operator in *m

cout<<*m<<endl;//7 random value 

}