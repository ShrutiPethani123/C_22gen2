#include<stdio.h>
void sumArray(int b[],int n)
{
    int sum=0;
    for( int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    printf("\n");
    for( int i=0;i<n;i++)
    {
        sum=sum+b[i];
    }
    printf("sum is :%d",sum);
}
void main()
{
    int i,n,a[100];
    
    printf("Enter the size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    sumArray(a,n);
}
