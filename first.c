#include<stdio.h>

void main()
{
    int x=10,y=5,z=34;

    // int max = x>y ? x:y;

    int min = (x<y && x<z)?x:(y<x && y<z)?y:z;
    printf("%d",min);
}

/*

1. Take two number from user and print minimum number.
2. Take three number from user and print minimum number.
3. Take one character from user and print character is vowel or consonant.
        user --> a e i o u A e i o u
4. Take one character from user and print character is alphabet , number or special character.
5. take value from user in number and print according week of days.
    1--> monday
    2--> tuesday

    7 --> sunday

6. Take values from user in month  and print according  to days of that month.

    2 --> 28/29 days
    3 --> 31 days

7. take percentage from user and print grade according to percentage

    >=90 --> A grade
    <90 and >=80 --> B grade
    <80 and >=70 --> C grade
    <70 and >=60 --> D grde
    <60 --> Fail




*/