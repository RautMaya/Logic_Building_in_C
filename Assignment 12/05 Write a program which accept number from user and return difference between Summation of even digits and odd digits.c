#include<stdio.h>
#include<conio.h>

int CountDiff(int iNo)
{
    int ECnt=0,OCnt=0,Dig=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        Dig=iNo%10;
        if(Dig%2==0)
        {
            ECnt=ECnt+Dig;
        }

         if(Dig%2!=0)
         {
             OCnt=OCnt+Dig;
         }
         iNo=iNo/10;
    }
    return ECnt-OCnt;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=CountDiff(iValue);


    printf("Difference between Summation of Even and odd Digits =%d",iRet);

    return 0;
}
