#include<iostream>
using namespace std;
int main(){
int n,factorial=1;
cout<<"enter the number:";
cin>>n;
for (int i = 1;i<=n; i++)
{
factorial=factorial*i;
cout<<"the factorial of "<<i<<" is "<<factorial<<endl;
}

return 0;

}