/*#include<stdio.h>                                          //to print lower to upper printf("the upper casr of %c is %c",ch,ch-32);
int main(){                                                                //logic A=65 and Z=90 and a=97 and z=122
    char ch;                                                      // difference of ascii value is 32 between lower and upper case 
    printf("enter the character:");
    scanf("%c",&ch);
    printf("the lower case of %c  is %c",ch,ch+32);
    return 0; 
}*/    
// to print ascii value                                        
/*#include<stdio.h>                                          
int main() {
    char ch;
    printf("enter the alphabet");
    scanf("%c",&ch);
    printf("the ascii value of %c is %d",ch,ch);
    return 0;
}*/
/*#include<stdio.h>                                            
int main() {
    int a;
    printf("enter the ascii value");
    scanf("%d",&a);
    printf("the alphabet of %d ascii value  is %c",a,a);
    return 0;
}*/
#include<stdio.h>                                            
int main() {
    char ch;
    printf("enter the alphabet");
    scanf("%c",&ch);
    (ch>='A')?( (ch<='Z')? (printf("upper case")): ( printf("lower case"))):( printf("lower case"));
    return 0;
}