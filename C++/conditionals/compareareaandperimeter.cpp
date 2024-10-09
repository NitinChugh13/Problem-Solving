#include<iostream>
using namespace std;
int main(){
int l,b,A,P;
cout<<"enter length and breadth of rectangle: ";
cin>>l>>b;
A=(l*b);
P=2*(l+b);
cout<<"Area= "<<A<<endl<<"perimeter= "<<P<<endl;
if (A>P)
{
cout<<"area is greater than perimeter!!";
}
else {
cout<<"peimeter is greater than area!!";
}

}