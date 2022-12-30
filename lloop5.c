#include<stdio.h>

void main()
{
    int n,a,sum=0;
    printf("Enter total number");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("Enter a no: ");
        scanf("%d",&a);
        sum=sum+a;
    }

    printf("sum -> %d",sum);

}