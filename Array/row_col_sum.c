#include<stdio.h>

void main()
{

    int a[3][3]={{1,2,3},{2,4,5},{1,4,5}};

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int sum=0;

    for(int i=0;i<3;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        printf(" \nsum of row %d: %d",i,sum);
    }

    for(int i=0;i<3;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
        {
            sum=sum+a[j][i];
        }
        printf(" \nsum of col %d: %d",i,sum);
    }

}