#include<iostream>
using namespace std;
int main(){
int a,r,count=0;
cout<<"enter a number: ";
cin>>a;
// while(a!=0){
// r=a%10;
// count++;
// a=a/10;
// }
// if(count==3){
// cout<<"three digit number";
// }else{
// cout<<"it is "<<count<< " digit number"<<endl;
// }
if (a>99&&a<1000)
{
cout<<"three digit number";
}
else{
cout<<"no";
}

return 0;
}