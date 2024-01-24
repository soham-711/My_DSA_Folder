#include<stdio.h>
//check are any digits repeat or not..
#define N 10 //in this case N=10 always..
int main()
{
    int n,arr[N]={0},index;
    printf("enter any number: ");
    scanf("%d",&n);
    while(n>0)
    {
        index=n%10;
        if(arr[index]==1)
            break;
        else
        arr[index]=1;
        n=n/10;
    }
    if(n>0)
    printf("there is repeated digits...");
    else
    printf("there is no repeated digits...");
    return 0;
    }