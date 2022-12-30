/*

20.

*
**
***
****
*****

21.

*
**
* *
*  *
*****

*/

#include<stdio.h>

void main()
{
    int row=8;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==row || j==1 || i==j)
            {
                 printf("*");
            }else{
                printf(" ");
            }
              
        }
        printf("\n");
    }
}