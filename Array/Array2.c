#include<stdio.h>

void main()
{
    int a[5]={1,11,55,77,2};
    int n;
    printf("Enter index: ");
    scanf("%d",&n);

    for(int i=n;i<4;i++)
    {
        a[i]=a[i+1];
    }

    printf("------");

    for(int i=0;i<4;i++)
    {
        printf("%d ",a[i]);
    }
}