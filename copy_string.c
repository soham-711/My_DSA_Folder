#include<stdio.h>
#include<string.h>
#define N 1000
//copy your string to another string...
int main()
{
    char A[N],B[N];
    printf("enter your string: ");
    gets(A);
    strcpy(B,A);
    printf("after copy string is:%s",B);

return 0;
}