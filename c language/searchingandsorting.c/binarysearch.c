#include <stdio.h>//binary search
#include <math.h>
int binary_search(int a[],int n ,int x){
       int l=0, r=n-1, mid,count=0,pos;
    while (l <= r)
    {
        mid = floor((l + r) / 2);
        if (x == a[mid]){
             pos=mid + 1;
            printf("position=%d", pos);
            break;
        }
        else if (x > a[mid])
            l = mid + 1;
        else
            r = mid - 1;
    }
    if (l > r)
        printf("element not found");
        return pos;
}

int main()
{
    int n, l, r, x, mid,count=0;
    printf("enter the size of array in sorted form : ");
    scanf("%d", &n);
    l = 0;
    r = n - 1;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element of array : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("enter the number you want to find: ");
    scanf("%d", &x);
    binary_search(a,n,x);
    

    return 0;
}