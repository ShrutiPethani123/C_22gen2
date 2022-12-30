#include<stdio.h>

/*
 12345
1*****
2** **
3* * *
4** **
5*****

primary diagonal -> i=j
secondary diagonal -> i+j=row+1

*/
void main()
{
    int row=9;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row;j++)
        {
            if(i==1 || i==row || j==1 || j==row ||i==j || i==row+1-j)
            {
                printf("*");
            }else{
                printf(" ");
            }

        }
        printf("\n");
    }
    
}

/*

i   j

1   1 2 
2   1 2
3   1 2
4   1 2 
5   break



1.
*****
*****
*****

2. 

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

3.

8 8 8 8 8
7 7 7 7 7
6 6 6 6 6
5 5 5 5 5

4. 

1 2 3 4 5
6 7 8 9 10
11 12 13 14 15 
16 17 18 19 20

5. 

16 18 20 22 
24 26 28 30
32 34 36 38

6. 

111213
212223
313233
414243

7. 

1 6 11 16 21
2 7 12 17 22
3 8 13 18 23
4 9 14 19 24
5 10 15 20 25

8.

1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8

9.

1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20


10.

101010
101010
101010
101010

11.

11111
00000
11111
00000

12. 

A B C D E
A B C D E
A B C D E
A B C D E

13.

A
AB
ABC
ABCD
ABCDE

14.

*****
*   *
*   *
*   *
*****

15.

*****
** **
* * *
** **
*****



16.

    *****
   *****
  *****
 *****
*****


17.

    *****
   *   *
  *   *
 *   *
*****



18.

*****
 *****
  *****
   *****
    *****



19.

*****
 *   *
  *   *
   *   *
    *****


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


22.

    *
   **
  ***
 ****
*****

23.

    *
   **
  * *
 *  *
*****





24.

*****
****
***
**
*


25.
*****
*  *
* *
**
*

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

28.

    *
   ***
  *****
 *******
*********

29.

*********
 *******
  *****
   ***
    *
    
30.

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    
31.

1
123
12345
1234567
123456789

32.

1
131
13531
1357531
135797531












*/