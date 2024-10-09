#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter a character"<<endl;
cin>>ch;
// cout<<ch<<endl;
if(ch>='a'&&ch<='z'){
    cout<<"lowercase"<<endl;
}
else if(ch>='A'&&ch<='Z'){
    cout<<"upper case"<<endl;
}
else{
    cout<<"a special character or number"<<endl;
}
return 0;
}