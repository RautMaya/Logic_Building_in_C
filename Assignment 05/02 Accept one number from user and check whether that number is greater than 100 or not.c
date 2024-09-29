#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0
BOOL ChkGreater(int iNo)
{
    if(iNo>100)
    {
        TRUE;
    }
    else
    {
        FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Please Enter number");
    scanf("%d",&iValue);

    bRet=ChkGreater(iValue);

    if(iValue >100)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }
    return 0;
}
