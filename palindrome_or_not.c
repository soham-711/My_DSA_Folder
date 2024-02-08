#include<stdio.h>
#define N 100
int main()
{
    int arr[N],i,n, count=1;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("enter array values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);   
    }
    for(i=0;i<n/2;i++)
    {
        if(arr[i]!=arr[n-1-i])
        {
            count=0;
            break;
        }
    }
    if(count==1)
    {
        printf("this number is palindrome number..");
    }
    else
    {
      printf("this number is not palindrome number..");  
    }
    return 0;
}
