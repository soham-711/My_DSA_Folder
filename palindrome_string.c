#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
    char string1[N],string2[N];
    printf("Enter your string value: ");
    gets(string1);
    strcpy(string2,string1);
    strrev(string1);
    if(strcmp(string1,string2)==0)
    {
        printf("your string is palindrome...");
    }
    else{
        printf("your string is not palindrome...");
    }
    return 0;
}