/*
*****
****
***
**
*
12345
1*****
2*  *
3* *
4**
5*

26.
*****
 ****
  ***
   **
    *

27.
*****
 *  *
  * *
   **
    *

*/

#include <stdio.h>

void main()
{
    int row = 5;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        for (int j = i; j <= row; j++)
        {
            if (i == 1 || j == i || j == row)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}
