#include<stdio.h>
#include<string.h>
#define N 100
//compare two strings...
int main()
{
    char A[N],B[N];
    printf("enter first string: ");
    gets(A);
    printf("enter second string: ");
    gets(B);
    if(strcmp(A,B)==0)
    printf("your two strings is equal..");
    else
    printf("your two strings is not equal...");
    return 0;
}