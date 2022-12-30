#include<stdio.h>

int countDigit(int n)
{
    int count=0;
    // while(n>0)
    // {
    //     n=n/10;
    //     count++;
    // }
   
    for( ;n>0 ; )
    {
        n=n/10;
        count++;

    }
    return count;
}

void main()
{
    int n;
    printf("Enter a no: ");
    scanf("%d",&n);
    printf("Digit in number %d is %d ",n,countDigit(n));
}