/*

12 - 1 2 3 4 6 12
6 - 1 2 3 6

gcd - 6
*/

#include<stdio.h>

void main()
{

    int a,b;
    int gcd;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    int min=a>b?b:a;

    if(a>b)
    {
        min=b;
    }else{
        min =a;
    }

    for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }

    printf("Gcd of %d and %d is %d",a,b,gcd);



}