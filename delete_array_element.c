#include<stdio.h>
//delete array element...
#define N 100
int main()
{
    int i,possition,arr[N],n;
    printf("enter number of array element: ");
    scanf("%d",&n);
    printf("enter values of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the possition which you want to delete: ");
    scanf("%d",&possition);
    for(i=possition-1;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("after deleting my array is: ");
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}