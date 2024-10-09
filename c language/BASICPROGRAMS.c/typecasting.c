#include<stdio.h>
int main(){
   //what is type casting 
   for(int i=65;i<=90;i++){
         printf("%d ",i);
         char ch=(char)i;// this is called type casting 
         printf("%c\n",ch);

   }
   return 0;
}