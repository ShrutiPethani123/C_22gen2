/*

prime no. 
2 3 5 7 11 13 17 .....

not prime
4 6 8 ....


n=6 - 1 2 3 6
2 to n-1

n=1000
998
2 to n/2
2 to Root(n)

*/

#include<stdio.h>

void main()
{
    int n;
    printf("ENter any number: ");
    scanf("%d",&n);
    int flag=0;
    if(n==2)
    {
        flag=0;
    }

    // for(int i=2;i<n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         flag=1;
    //         break;
    //     }
        
    // }

    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
        
    }

    if(flag==0)
    {
        printf("Number is Prime");
    }else{
        printf("Number is not prime");
    }
}





