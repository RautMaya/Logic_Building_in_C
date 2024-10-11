#include<stdio.h>
#include<conio.h>

int CountOdd(int iNo)
{
    int O_Cnt=0,Dig=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        Dig=iNo%10;

        if(Dig%2!=0)
        {
            O_Cnt++;
        }
        iNo=iNo/10;
    }
    return O_Cnt;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=CountOdd(iValue);


    printf("Count of Odd Number is =%d",iRet);

    return 0;
}
