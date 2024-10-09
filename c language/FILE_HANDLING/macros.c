// #include<stdio.h>
// #define PI 3.14159265359
// int main(){
//     // printf("%f",PI);
//     double x=3.14159265359;
//     printf("%.10f",PI);
// }
#include<stdio.h>
#define PI 3.14
#define area(r) (PI*r*r)//using macro
// float area(float r){
//     return PI*r*r;
// }
int main(){
    printf("AREA=%f",area(10));
    return 0;
}
