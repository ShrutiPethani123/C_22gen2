#include<stdio.h>

void main()
{
    int a[6],b[6];
    for(int i=0;i<6;i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }

    printf("Array......");
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }

    // int j=5;
    // for(int i=0;i<6;i++,j--)
    // {
    //     b[i]=a[j];
    //     // j--;
    // }

    int start=0;
    int end=5;
    int temp;

    // while(start<=end)
    // {
    //     temp=a[start];
    //     a[start]=a[end];
    //     a[end]=temp;
    //     start++;
    //     end--;
    // }

    for(int start=0;start<=end;start++,end--)
    {
        temp=a[start];
        a[start]=a[end];
        a[end]=temp;
    }

    printf("\nReverse Array......");
    for(int i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
}

/*

Take one array from user and reverse array without any extra array.

a - 5 8 9 6 1
a - 1 6 9 8 5

5 8 9 6 1

start=0
end=5

1 6 9 8 5

start++
end--

start<=end

*/