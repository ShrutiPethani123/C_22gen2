/*

1. Entry control
    for
    while
2. Exit control
    do while



*/

#include<stdio.h>

void main()
{
    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",i*3);
    // }

    // int j=1;
    // while(j<=5)
    // {
    //     printf("%d ",j-2);
    //     j++;
    // }

    // int k=0;
    // do{
    //     printf("%d " , k);
    //     k++;
    // }while(k<=4);

    int j=1;
    do{

        printf("%d ",j);
        // j=j+2;
        j+=2;
    }while(j<=10);
}

/*

1. print your name 5 times using all loops(for , while , do while);
2. print even numbers between 1 to 10 using all loops.
3. print odd numbers between 1 to 10 using all loops and without if.
4. print multiplication table of user given input using all loops.

    5 * 1 = 5
    5 * 2 = 10
    .
    .
    5*10 = 50

5. take 5 numbers from user and print sum of all numbers.
6. take one number from user and find last  and first digit of that number

    3425 --> 

    last digit - 5
    first digit - 3

7. Take one number from user and count total number of digit.

    211234 --> 6

8. Take one number from user and print sum of digit.

    1234 = 10 

9. Take Number from user and print reverse number.

    4875 --> 5784

10. check number is palindrom or not.

    121 , 1221, 56765 -> palindrom
    123 -> not palindrom

11. check number is armstrong or not.

    123 --> 1^3 + 2^3 + 3^3 = 1+8+27 = 36

    123!=36 --> not an armstrong number 

    370 --> 27+343+0 = 370

    370 -> armstrong number

12. Take two numbers from user and print gcd of two number.

    12 - 1 2 3 4 6 12
    6 - 1 2 3 6

    gcd - 6

    15 - 1 3 5 15
    6 - 1 2 3 6

    gcd - 3

13. Take two numbers from user and print LCM of two number.

    12 - 12 24 36 
    6 - 6 12 18 

    lcm -12

    15 - 15 30 45 60 75 90
    25 - 25 50 75 100

    lcm = 75


*/