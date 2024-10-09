#include<stdio.h>
int Area(int a,int b){
    int area=a*b;
    return area;
}
int main(){
    int a,b;
    printf("enter the length: ");
    scanf("%d",&a);
  printf("enter the breadth: ");
    scanf("%d",&b);
    printf("area of rectangle is: %d",Area(a,b));
    
        
    return 0;
}