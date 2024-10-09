#include<stdio.h>
int main() {
    int i,j;
    int arr[5][5];
 /* int r,c;
  printf("enter the number of rows: ");
  scanf("%d",&r);
   printf("enter the number of columns: ");
  scanf("%d",&c);
  int arr[r][c];
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        printf("enter the numner of students and their marks (%d,%d): ",i,j);
        scanf("%d",&arr[i][j]);
    }
  }*/

      for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        arr[i][j]=10;
        printf("%d ",arr[i][j]);
        
    }
            printf("\n");
  }







    return 0;
}