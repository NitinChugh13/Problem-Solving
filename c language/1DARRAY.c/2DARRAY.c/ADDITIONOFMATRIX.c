#include<stdio.h>
int main(){
   int i,j,r,c,sum=0;
printf("enter the number of rows in first matrix: ");
scanf("%d",&r);
printf("enter the number of columns in first matrix: ");
scanf("%d",&c);
int arr[10][10],brr[10][10],crr[10][10];
printf("enter the first matrix A\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("enter the element of matrix A (%d,%d): ",i,j);
        scanf("%d",&arr[i][j]);
    } 
  }   
     printf("the matrix A is \n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
     }
     
   printf("enter the second matrix B\n");

      for(i=0;i<r;i++){
    for(j=0;j<c;j++){
       printf("enter the element of matrix B(%d,%d): ",i,j);
        scanf("%d",&brr[i][j]);  
    }
  } 
       printf("the matix B is\n");
        for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
     }
     
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        crr[i][j]=arr[i][j]+brr[i][j];
    }
  }
     printf("after addition A+B matix C is\n");
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",crr[i][j]);
            sum=sum+crr[i][j];
        }
        printf("\n");
     }
         printf("\nsum=%d",sum);
    return 0;
}