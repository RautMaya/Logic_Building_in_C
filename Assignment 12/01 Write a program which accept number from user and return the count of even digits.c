#include<stdio.h>
#include<conio.h>

int CountEven(int iNo)
{
    int Count=0,Digit=0;


    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        Digit=iNo%10;

        if(Digit%2==0)
        {
            Count++;
        }

        iNo=iNo/10;
    }
    return Count;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=CountEven(iValue);


    printf("Count of Even Number is =%d",iRet);

    return 0;
}
