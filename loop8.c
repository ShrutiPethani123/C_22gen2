/*

2314

4   -> 0
3  -> 43
1  -> 431

1
1*10 + 2 = 12

123 -> 4
123*10 + 4 = 1234



*/



#include<stdio.h>

void main()
{
    int n,sum=0,rem;
    printf("Enter a number: ");
    scanf("%d ",&n);
    int temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }

    // printf("sum-> %d",sum);

    if(temp==sum)
    {
        printf("Armstrong");
    }else{
        printf("Not Armstrong....");
    }

}