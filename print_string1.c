#include<stdio.h>
#include<string.h>
#define N 100
//print your string....
//it stop work when it comes infront of space..
int main()
{
    char arr[N];
    printf("enter your string: ");
    scanf("%s",arr);
    printf("your string is: %s",arr);
    return 0;
}