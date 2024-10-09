#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,m,p,r,count =0,sum=0;
cout<<"enter the number";
cin>>n;
m=n; p=n;
while(n!=0){
n%10;
count++;
n=n/10;
}
while(m!=0){
r=m%10;
sum+=pow(r,count);
m=m/10;
}
if (p==sum)
{
    cout<<"ARMSTRONG";
}
else{
cout<<"NOT ARMSTRONG";
}


return 0;

}