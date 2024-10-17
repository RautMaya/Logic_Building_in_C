#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(int ch)
{
    if(ch>=97 && ch<=122)
    {
        return 1;

    }
    else
    {
        return 0;
    }
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet=ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Small Case Character.");
    }
    else
    {
        printf("It is not a Small Case Character .");
    }
    return 0;
}



