#include<iostream>
using namespace std;
void firstlast(int n){
    int last_digit=n%10;
    int first_digit;
    n=n/10;
    while(n!=0){
      first_digit=n%10;
        n=n/10;
    }
    cout<<"first digit is:"<<first_digit<<endl<<"last digit is:"<<last_digit<<endl;
}
    int main(){
        int n;
        cout<<"enter a number:";
        cin>>n;
        firstlast(n);


    }
