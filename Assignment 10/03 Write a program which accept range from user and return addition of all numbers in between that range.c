#include<stdio.h>
#include<conio.h>

int RangeSum(int iStart,int iEnd)
{
    int i=0,Sum=0;

    if(iStart>iEnd || iStart<=0)
      {
          printf("invalid Number");
        return 0;
      }
    for(i=iStart;i<=iEnd;i++)
        {
            Sum=Sum+i;

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

    iRet=RangeSum(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;
}
