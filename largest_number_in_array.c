#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
    int arr[N],n,i,j,large_value;
    printf("enter array element: ");
    scanf("%d",&n);
    printf("My array is: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        printf("%d\t",arr[i]);
    }
    large_value=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<large_value)
        {
            large_value=arr[i];
        }
    }
    printf("\nsmallest value is: %d",large_value);
    return 0;
}
