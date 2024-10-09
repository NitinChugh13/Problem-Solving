#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"enter the upper and lower limit:";
cin>>a>>b;
for(int i=a;i<=b;i++){
    int flag=0;
    for(int j=1;j<=i;j++){
        if(i%j==0){
            flag++;
        }
    }
    if(flag==2){
        cout<<i<<endl;
    }


}
return 0;

}