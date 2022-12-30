/*
factorial using function:

5! = 5*4*3*2*1 = 120
4! = 4*3*2*1 = 24
0! = 1


*/

#include<stdio.h>

int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;

}

void main()
{

    int x;
    printf("Enter a no: ");
    scanf("%d",&x);
    int ans = fact(x);
    printf("Factorial of %d is %d",x,ans);

}

/*

1. take one number from user and pass in function.
    Make one function to find count of digit.

    n = 23525
    total digit = 5


*/

