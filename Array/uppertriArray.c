#include<stdio.h>

void main()
{
    int a[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    int flag=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j<i && a[i][j]!=0)
            {
                flag=1;
            }
        }
    }

    if(flag==1)
    {
        printf("Array is not Upper Tringular Matrix");
    }else{
        printf("Upper Tringular Matrix");
    }
}