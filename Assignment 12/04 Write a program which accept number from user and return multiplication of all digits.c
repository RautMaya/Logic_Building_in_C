#include<stdio.h>
#include<conio.h>

int MultiDigits(int iNo)
{
    int Dig=0,Multi=1;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        Dig=iNo%10;
        if(iNo>0)
        {
            Multi=Multi*Dig;
        }


        iNo=iNo/10;
    }
    return Multi;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=MultiDigits(iValue);


    printf("Multiplication of all Digits =%d",iRet);

    return 0;
}
