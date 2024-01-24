#include<stdio.h>
//reverse an array...
#define N 5
int main()
{
    int i,arr[N];
    printf("enter the values: ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("my array is: ");
    for(i=0;i<N;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    printf("after reverse my array is: ");
    for(i=N-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    return 0;
}