//12345
//ABCD
//123
//AB
//1
#include<stdio.h>
int main(){
  int n,a,p;
  printf("enter number of rows :");
  scanf("%d",&n);
  p=n;
  for(int i=1;i<=n;i++){
    a=1;
    for(int j=1;j<=p;j++){
      if(i%2==0){
        printf("%c",a+64);
        a++;
      } 
      else{
        printf("%d",j);
      }
             
    } 
          printf("\n");
          p--;
        
  }
}
    