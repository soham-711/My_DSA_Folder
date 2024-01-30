#include<stdio.h>
#include<string.h>
#define N 1000
int main()
{
    char A[N];
    printf("enter your string: ");
    gets(A);
    strrev(A);
    printf("after reversing your string is: ");
    puts(A);
    return 0;
}
