#include<stdio.h>
#include<string.h>
#define N 1000
int main()
{
    char A[N],B[N];
    printf("enter your first string: ");
    gets(A);
    printf("enter your second string: ");
    gets(B);
    strcat(A,B);
    printf("my combined string is: ");
    puts(A);
    return 0;
}