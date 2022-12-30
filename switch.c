#include<stdio.h>

void main()
{

    int n;
    printf("Enter week days:  ");
    scanf("%d",&n);

    switch(n)
    {
        case 1:
            
        case 2:
            
        case 3:
            printf("Wednesday");
            break;
        
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        
        case 6:
            printf("Satuarday");
            break;
        case 7:
            printf("sunday");
            break;
        
        default:
            printf("Invalid choice!!!");
            break;
    }

}

/