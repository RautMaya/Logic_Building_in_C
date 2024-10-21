#include<stdio.h>
#include<string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{


    while(*str != '\0')
    {
        if(*str == ch)
        {
            return 1;
        }


        str++;
    }
    return 0 ;
}
int main()
{
    char arr[20]="\0";
    char cValue = '\0';
    BOOL bRet ;

    printf("Enter String\n");
    fgets(arr,20,stdin);

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet= ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character Not Found");
    }
    return 0;
}
