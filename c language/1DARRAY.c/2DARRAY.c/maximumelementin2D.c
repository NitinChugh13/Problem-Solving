#include<stdio.h>
int main(){
   int i,j,r,c,max,maxi,maxj;
printf("enter the number of rows in first matrix: ");
scanf("%d",&r);
printf("enter the number of columns in first matrix: ");
scanf("%d",&c);
int arr[10][10];
printf("enter the first matrix A\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("enter the element of matrix A (%d,%d): ",i,j);
        scanf("%d",&arr[i][j]);
    } 
    max=arr[0][0];
  }   
     printf("the  maximum element in matrix A is \n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(max<arr[i][j]){
             max=arr[i][j];
             maxi=i;
             maxj=j;
            }
            //printf("%d ",arr[i][j]);
        }
       // printf("\n");
     }
           printf("%d\nthe index is(%d,%d) ",max,maxi,maxj);
           


     return 0;
}      