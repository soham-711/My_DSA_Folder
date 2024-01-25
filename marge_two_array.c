#include<stdio.h>
//marge two array....
int main()
{
    int A[100],B[100],C[200],i,j,k,m,n;
    printf("enter number of element of first array: ");
    scanf("%d",&m);
    printf("enter enements of first array: ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("enter number of element of second array: ");
    scanf("%d",&n);
    printf("enter enements of second array: ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&B[j]);
    }
    for(i=0,j=0,k=0;i<m && j<n;k++)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];
            i++;
        }
        else
        {
            C[k]=B[j];
            j++;
        }
    }
    while(i<m)
    {
        C[k]=A[i];
        k++;
        i++;
    }
    while(j<n)
    {
        C[k]=B[j];
        k++;
        j++;
    }
    printf("after marging my new array is: ");
    for(i=0;i<m+n;i++)
    {
        printf("%d\t",C[i]);
    }
    return 0;
}