#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
    char first[N],second[N],temp[N];
    printf("enter your first string: ");
    gets(first);
    printf("enter your second string: ");
    gets(second);
    printf("Before swaping your first string is: ");
    puts(first);
    printf("Before swaping your second string is: ");
    puts(second);
    strcpy(temp,first);
    strcpy(first,second);
    strcpy(second,temp);
    printf("After swaping your first string is: ");
    puts(first);
    printf("After swaping your second string is: ");
    puts(second);

}