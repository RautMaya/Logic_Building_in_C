#include<stdio.h>
#include<conio.h>

int KMtoMeter(int iNo)
{
    return iNo*1000;
}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter distance");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("meter of %d ",iRet);

    return 0;
}
