#include<iostream>
using namespace std;
int main(){
int x=3,y,z;
y=x=10;//assignment operator iska precedence right to left 
z=x<10;//comparison occurs if true return 1 else 0
cout<<x<<" "<<y<<" "<<z;
return 0;
}