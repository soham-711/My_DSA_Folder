#include<stdio.h>
//arrange your array ...
int main()
{
    int i,arr[5]={0}, array[5]={1,[1]=2,[4]=5};
    printf("my new array is: ");
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
     printf("\n");
    printf("my second array is: ");
    for(i=0;i<5;i++)
    {
        printf("%d",array[i]);
    }
    return 0;
}