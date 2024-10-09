#include <stdio.h>//max and min element in an array
int main()
{
    int size, max ,min;
    printf("enter the size of array: ");//for maximum value max=arr[0] max<a[i]
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("enter the element number %d of array: ",i+1);
        scanf("%d", &arr[i]);
        max=arr[0];
        min=arr[0];
    }
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i]){//for maximum if(max<arr[i]){
        //                                              max=arr[i]      }
            min = arr[i];
        }
    }
    for (int i = 1; i < size; i++)
    {
        if (max<arr[i]){//for maximum if(max<arr[i]){
        //                                              max=arr[i]      }
            max=arr[i];
        }
    }

    printf("max=%d\nmin=%d", max,min);

    return 0;
}