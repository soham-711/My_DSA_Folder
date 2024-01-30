#include<stdio.h>
//print your string ...
#include<string.h>
#define N 100
int main()
{
    char arr[N];
    printf("enter your string: ");
    gets(arr);
    printf("your string is: %s\n",arr);
    // or
    printf("your string is: ");
    puts(arr);
    return 0;

}