/*

Array

-> single Dim
-> multi Dim


rows , cols
2*3 -> row= 2 , col=3 

1 2 6
4 8 5 
2*3

5 8 1
1 2 3
1 9 6
3*3

5
1*1




*/
#include<stdio.h>

void main()
{
    int a[2][3];
}

/* 1. Take one 2d array from user and print sum of diagonal element.

    -> primary
    -> secondary
    0  1  2
   0 1 5 6   
   1 2 4 1
   2 3 6 1

    n*n (n=3)

    primary -> 1+4+1 = 6
    seconary -> 6+4+3 = 13



    primary -> i==j 
    secondary -> i+j = n-1 -> i == n-j-1

2. take one array from user and print all rows and cols sum.


4 5 1 
2 3 6 

1st row = 10
2nd = 11

1st col = 6
2nd =8
3rd = 7


3. check the array is upper tringular or not ?

  0 1 2
0 1 2 3
1 0 4 5
2 0 0 3 -> yes

10
20
21
col<row --> 0

 1 2 3
 0 2 3
 0 2 0  -> no  

 -> 1 2 3
    0 2 3
    0 0 0

 1 1 1 1
 0 2 2 2
 0 0 3 3
 0 0 0 4 -> yes



4.  find sum of  all upper tringular elements.

1 2 3
0 1 3 
0 0 6 

--> 2+3+3 = 8

5. check the array is Lower tringular or not ?

1 0 0
2 3 0
1 2 3

yes

1 0 0 0
1 2 0 0 
3 2 1 0
1 2 3 1

6. find sum of  all Lower tringular elements.

*/