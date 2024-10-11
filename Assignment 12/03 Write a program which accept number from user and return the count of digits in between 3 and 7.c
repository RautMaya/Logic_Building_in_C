#include<stdio.h>
#include<conio.h>

int CountRange(int iNo)
{
    int Cnt=0,Dig=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        Dig=iNo%10;

        if(iNo>3 && iNo<7)
        {
            Cnt++;
        }
        iNo=iNo/10;
    }
    return Cnt;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=CountRange(iValue);


    printf("Count of Range Number is Between 3 to 7 =%d",iRet);

    return 0;
}
