/*
 12345
1*****
2** **
3* * *
4** **
5*****

primary diagonal -> i=j
Secondary Diagonal -> i+j = row +1
                    -> i=row + 1 - j

15
24
33
42
51

sum = 6(row+1)
*/

#include<stdio.h>

void main()
{
    int row=11;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(i==1 || j==1 || i==row || j==row || i==j || i==row+1-j)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}