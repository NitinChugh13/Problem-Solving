#include<iostream>
using namespace std;
int main(){
    int m,n,p,q;
    cin>>m>>n>>p>>q;
    int arr[m][n];
    int brr[p][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>brr[i][j];
        }
    }
    //condition for multiplication 
    if(n!=p){
        cout<<"not possible";
        return 0;
    }
    //multiplication 
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j]=0;
            for(int k=0;k<m;k++){
                res[i][j]+=arr[i][k]*brr[k][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

}