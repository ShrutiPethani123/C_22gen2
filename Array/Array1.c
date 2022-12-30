/*
Array - 

- Data structure
- all elements have same data type
- index start with 0
- index end with size-1
- all elements have continuos memory location




*/

#include<stdio.h>

void main()
{
    // int arr[5]={1,2,3,4,5};

    int evenCount=0,oddCount=0;

    int b[6];
    for(int i=0;i<6;i++)
    {
        printf("b[%d]: ",i);
        scanf("%d",&b[i]);
    }

    printf("Array......");
    for(int i=0;i<6;i++)
    {
        printf("%d ",b[i]);
    }

/*
    for(int i=0;i<6;i++)
    {
        if(b[i]%2==0)
        {
            evenCount++;
        }else{
            oddCount++;
        }
    }

    printf("\nEven count : %d",evenCount);
    printf("\nOdd count : %d",oddCount);
*/
printf("\n Negative Elements: \n");
for(int i=0;i<6;i++)
{
    if(b[i]<0)
    {
        printf("%d ",b[i]);
    }
}

printf("%d",sizeof(b)/sizeof(b[0]));

    

}

/*

1. Take one array from user and print that array. print count of odd and even elements from array.

1 2 6 4 7 8 

even: 4
odd: 2

2. Take one array from user and print that array. print all negative numbers from array.

1 -5 -3 -4 6  8 9
negative numbers: -5 -3 -4 

3. Take one array from user and print that array. 
    Take one element from user and count frequecy of that element.

1 3 1 2 4 8 5 3 1
n=1
count : 3

n=6
conut:0

4. Take one array from user and print that array. Print sum of all element

1 2 3 4 5
15

5. Take two array from user and print multiplication of two array.

1 2 3 4 5
1 3 6 9 7 1 2

1 6 18 .....

6.  Search element from array.
 
 4 5 8 6 31 5 2 

 elem - 8  -> found at location 3
 elem - 67 -> not found

7. Take one array from user and store odd numbers into 
odd array and even numbers into even array.

4 4 2 6 8 2 3 5 7 9 2

odd - 3 5 7 9
even - 4 4 2 6 8 2 2

8. Take one array from user and delete one element from array.

4 5 8 9 6 3 1
index- 3

4 5 8 6 3 1

9. Take one array from user and insert element in array.

4 59 2 6 3 4

index - 2
elem - 100

4 59 100 2 6 3 4


10. Take one array from user and print reverse number using another array.

a - 5 8 9 6 41 2
b - 2 41 6 9 8 5

11.  Take one array from user and reverse array without any extra array.

a - 5 8 9 6 1
a - 1 6 9 8 5

12. Print array using function.
    main-> input array
    printArray(XXXX)

    printArray(XXXXX)
    {

    }

13.  print sum of all element of array using function.

14.  print all numbers from array that is divisible by 3 using function. 

15. left rotate of array .

 1 2 3 4 5

 1st time 

 2 3 4 5 1

 2nd 

 3 4 5 1 2


 count=3

 4 5 1 2 3

16. right rotate array.

1 2 3 4 5

5 1 2 3 4
5 4 1 2 3
5 4 3 1 2
5 4 3 2 1


17. Find maximum element from array using function

4 5 8 12 6 9 5 33 45 6

max = 45

18. Find Frequency of each elemnent in array.

a - 1 1 5 3 6 9 2 1 2

1 - 3 times
5 - 1 
3 - 1
6 - 1
9 - 1
2 - 2 times








*/