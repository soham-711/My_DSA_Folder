#include<stdio.h>
#include<math.h>
int main()
{
    int number,num,i,j,k,count=0,sum=0;
    printf("enter any number to cheak armstrong or not : ");
    scanf("%d",&number);
    num=number;
    while (num!=0)
    {
        num=num/10;
        count++;
        
    }
    num=number;
    while(num!=0)
    {
        i=num%10;
        sum += pow(i,count);
        num=num/10;
    }
   if(number==sum)
   {
    printf("your number is an Armstrong number...");
   }
   else{
    printf("your number is not a Armstrong number...");
   }
    return 0;
    }