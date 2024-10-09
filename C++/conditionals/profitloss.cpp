#include<iostream>
using namespace std;
int main(){
int cp,sp,p;
cout<<"enter the cost and selling price: ";
cin>>cp>>sp;
p=sp-cp;
if (cp>sp)
{
cout<<"loss of: ";
cout<<(-p);
}
else{
cout<<"profit of: "<<p;
}

}