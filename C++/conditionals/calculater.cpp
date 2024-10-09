#include<iostream>
using namespace std;
int main(){
char ch;
float a,b;
cout<<"enter the operation:";
cin>>ch;
cout<<"enter the values of a and b:";
cin>>a>>b;
switch(ch){
case '+': cout<<"the sum is:"<< (a+b)<<endl;
break;
case '-': cout<<"the subtraction is:"<< (a-b)<<endl;
break;
case '*': cout<<"the multiplication is:"<< (a*b)<<endl;
break;
case '/': cout<<"the division is:"<<(a/b)<<endl;
break;
default : cout<<"the operation is not included";
break;
}
return 0;
}