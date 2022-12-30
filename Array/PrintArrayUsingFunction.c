#include<stdio.h>


int sumArray(int x[],int n)
{
    int sum=0;
    int a=78;
    for(int i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }

    for(int i=0;i<n;i++)
    {
        sum=sum+x[i];
    }
    return sum , a, 90;

}

void main()
{
    int n=0;
    int a[20];

    printf("Enter size of array: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   
    int ans = sumArray(a,n);
    printf("\n ans is: %d",ans);


}

