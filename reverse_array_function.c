#include<stdio.h>
//reverse an array using function...
#define N 10
void reverse(int arr[N] , int n)
{
    int temp,i;
    for(i=0;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }

}
int main()
{
    int n,arr[N],i;
    printf("enter number of array element: ");
    scanf("%d",&n);
    printf("enter array value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);
    printf("after reverseing my array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}