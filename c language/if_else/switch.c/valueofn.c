#include<stdio.h>
int main(){
    int a,b,x;
    printf("enter the values of a,b,x");
    scanf("%d%d%d",&a,&b,&x);
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    switch (n){
        case 1: printf("%d",(a*x)%b);
                break;
        case 2: printf("%d",(a*x*x)+(b*b));
        break;
        case 3: printf("%d",a-(b*x));
        break;
        case 4: printf("%d",a+(x/b));
        break;
        default: printf("wrong entry");        
    }
    return 0;
    
}