#include<stdio.h>
//inverse an array using swap condition...
#define N 10
int main()
{
    int i,j,k,n,arr[N],temp;
    printf("enter number of array element: ");
    scanf("%d",&n);
    printf("enter the array value: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0,k=n-1;j<n/2;j++,k--)
        {
            temp=arr[j];
            arr[j]=arr[k];
            arr[k]=temp;
        }
    }
    printf("after reverseing my array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
