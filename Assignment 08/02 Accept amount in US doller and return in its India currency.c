#include<stdio.h>

int DollerToINR(int iNo)
{
    int ans;
    if(iNo>0)
    {
        ans=iNo*70;

    }
    else
    {
        printf("Invalid Input");
    }
    return ans;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number of USD");
    scanf("%d",&iValue);

    iRet=DollerToINR(iValue);

    printf("Value in INR is %d\n",iRet);

    return 0;
}
