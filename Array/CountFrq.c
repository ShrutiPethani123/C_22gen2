#include<stdio.h>

void main()
{
    int a[100],f[100],n;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("\n Enter element for array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        f[i]=-1;
    }

    printf("\n Array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

    int count=0;
    for(int i=0;i<n;i++)
    { 
        count=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=count;
        }
    } 
    printf("\n Frequency of each element: ");

    for(int i=0;i<n;i++)
    {
        if(f[i]!=0)
        {
            printf("\n%d -> %d times",a[i],f[i]);
        }
    }

}