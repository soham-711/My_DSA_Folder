#include<stdio.h>
#include<string.h>
#define N 100
//calculate the length of a string...
int main()
{
    char arr[N],length;
    printf("enter your string : ");
    gets(arr);
    length=strlen(arr);
    printf("the length of your string is: %d",length);
    return 0;

}