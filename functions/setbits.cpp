#include<iostream>
using namespace std;
int setbits(int n){
    int count=0;
    const int numBits = sizeof(int) * 8;
    unsigned int number = static_cast<unsigned int>(n);
    for (int i = numBits - 1; i >= 0; --i) {
        int p=(number >> i) & 1;
        if(p==1){
        count++;
        }
    }
    int ans=count;
      return ans;
}
int main(){
    int a,b,m,n;
    cout<<"enter a and b:";
    cin>>a>>b;
    m =setbits(a);
     n=setbits(b);
     cout<<"a= "<<m<<" "<<"b= "<<n<<endl;
     cout<<"Total number of 1 int the bits is: "<<(m+n)<<endl;

}