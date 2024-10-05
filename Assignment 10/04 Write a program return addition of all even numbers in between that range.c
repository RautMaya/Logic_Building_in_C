#include<stdio.h>
#include<conio.h>

int RangeSumEven(int iStart,int iEnd)
{
    int i=0,Sum=0;

    if(iStart>iEnd || iStart<=0)
    {
        printf("Invalid number");
        return 0;
    }
    for(i=iStart;i<=iEnd;i++)
    {
        if(i%2==0)
        {
            Sum=Sum+i;
        }

    }
    return Sum;
}
int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter Ending point");
    scanf("%d",&iValue2);

    iRet=RangeSumEven(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;
}

