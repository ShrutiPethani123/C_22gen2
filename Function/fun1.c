/*

Function - Set of instruction
use - Code reusability

3 part:

1. Declaration
2. Defination
3. Calling

syntax:

return_type  Function name (Argument)
{

    // body of function
}

return type:

void - NO return type
int
float
char
double


Function Name:

check_prime
checkPrime

Argument/Perameter


-> Defination
int add(int x , int y)
{

}

-> calling

add(2,3);


-> Type of Function

1. Built in Function
2. User Define Function
    1. with Return type with argument
    2. without Return type with argument
    3. with Return type without argument
    4. without Return type without argument


example:

1. 

int add(int x,int y)
{
    return x+y;
}

2.

void add(int x,int y)
{
    printf("Addition of %d and %d is %d",x,y,(x+y));   
}

3.int add()
{
    return 0;
}

4. 
void display()
{
    printf("Hello...");
}


*/

#include<stdio.h>

void display(); // without r.t without arg - declaration
int add(int x,int y);
int sum();

void mul (int a)
{
    printf("\nMultiplication is %d ",a*5);
}



void main()
{
    display();  // function calling
    // display();
    // display();

    int ans = add(2,3);
    printf("\nAddition is: %d ",ans);
    printf("\nsum is: %d",sum());

    int a;
    printf("\nEnter a no. ");
    scanf("%d",&a);
    mul(a);


}

void display() // - Defination
{
    printf("\n22General Batch 2");
}

int add(int x,int y)
{
    return x+y;
}

int sum()
{
    int a=1,b=4;
    return a+b;

}







