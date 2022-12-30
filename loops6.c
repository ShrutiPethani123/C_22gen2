/*
    123 % 10 

   10 |123
   ans = 12.3
   rem = 3



*/


#include<stdio.h>

void main()
{
    int n,last_digit,first_digit;
    int count=0;
    printf("Enter number ");
    scanf("%d",&n);

       
    last_digit = n%10;

    // while(n>0) // n!=0
    // {
    //     first_digit=n%10; // 123 % 10 = 3  // 12%10 = 2 // 1
    //     n=n/10; //n=123/10 = 12 // 1 // 0
    //     count++;
    // }

    while(n>10)
    {
        n=n/10;
    }
    first_digit=n;

    printf("First digit is %d ",first_digit);
    printf("\nLast digit is %d ",last_digit);
    printf("\ntotal digit: %d",count);
 

}