#include<stdio.h>

void main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);

    if(ch>='0' && ch<='9')
    {
        printf("Number....");
    }else if((ch>='a'&& ch<='z')|| (ch>='A'&& ch<='Z') )
    {
        printf("Alphabet...");
    }else{
        printf("Special character");
    }
}