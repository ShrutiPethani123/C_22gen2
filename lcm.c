/*
2 - 2 4 6 8 10 12 
5 - 5 10 15 20

lcm = 10
*/

#include<stdio.h>
void main()
{
    int a,b;
    int lcm;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    int max=a<b?b:a;

    int i=max;
    while(1)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
        i=i+max;
        // i+=max;
    }

    printf("Lcm is %d",lcm);


}