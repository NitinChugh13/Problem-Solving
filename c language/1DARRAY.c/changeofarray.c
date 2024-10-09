#include <stdio.h>
int main()
{
    int size,i; 
    printf("enter the size of array: ");//for maximum value max=arr[0] max<a[i]
    scanf("%d", &size);
    int arr[size];
    for ( i = 0; i < size; i++)
    {
        printf("enter the element number %d of array: ",i+1);
        scanf("%d", &arr[i]);
    }
    for( i = 0; i < size; i++){
        if(i%2==0) arr[i]=arr[i]+10;
        else arr[i]=arr[i]*2;
        printf("%d ",arr[i]);
    }  
    //printf("the modified array is: %d ",arr[i]);
    return 0;

}
