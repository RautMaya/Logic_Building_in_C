#include<stdio.h>
#include<conio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    int i=0;
    for(i=iEnd;i>=iStart;i--)
    {
        printf("%d\t",i);
    }
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter Ending point");
    scanf("%d",&iValue2);

    RangeDisplayRev(iValue1,iValue2);


    return 0;
}

