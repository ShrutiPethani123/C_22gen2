#include <stdio.h>

void main()
{

    int a[5] = {1, 2, 3, 4, 5};
    int n=5;
    int temp,count;
    printf("Enter a rotate count: ");
    scanf("%d",&count);

    count=count%n;


    // for (int j = 0; j < count; j++)
    // {

    //     temp = a[0];

    //     for (int i = 0; i < n; i++)
    //     {

    //         a[i] = a[i + 1];
    //     }

    //     a[n - 1] = temp;
    // }

    for(int j=0;j<count;j++)
    {
        temp=a[n-1];

        for(int i=n-1;i>0;i--)
        {
            a[i]=a[i-1];
        }

        a[0]=temp;
    }

    printf("Array..");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


}