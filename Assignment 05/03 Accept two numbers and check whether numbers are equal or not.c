#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkEqual(int iNo1,int iNo2)
{
    if(iNo1==iNo2)
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
    int iValue1=0,iValue2=0;
    BOOL bRet=FALSE;

    printf("please Enter two numbers");
    scanf("%d%d",&iValue1,&iValue2);

    bRet=ChkEqual(iValue1,iValue2);
    if(iValue1==iValue2)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}
