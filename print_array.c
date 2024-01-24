#include<stdio.h>
//print an array...
#define N 10
int main()
{
    int i,arr[N];
    printf("enter array value: ");
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("my array is: ");
    for(i=0;i<N;i++)
    {
        printf("%d",arr[i]);
    }
return 0;
}