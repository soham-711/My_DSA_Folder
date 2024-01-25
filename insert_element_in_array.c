#include<stdio.h>
//insert an element in array..
#define N 100
int main()
{
    int i,n,arr[N],possition,value;
    printf("enter number of array element: ");
    scanf("%d",&n);
    printf("enter array values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the possition at where you want to insert new element: ");
    scanf("%d",&possition);
    printf("enter the value of element that you want to insert: ");
    scanf("%d",&value);
    for(i=n-1;i>=possition-1;i--)
    {
        arr[i+1]=arr[i];
    }
        arr[possition-1]=value;
    printf("my new array is: ");
    for(i=0;i<n+1;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}