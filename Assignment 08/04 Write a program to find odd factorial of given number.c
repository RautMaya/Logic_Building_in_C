#include<stdio.h>

int OddFactorial(int iNo)
{
    int fact=0,temp=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
            for(temp=iNo,fact=1;1<temp;temp--)
        {
            if(temp%2!=0)
            {
                fact=fact*temp;
            }
        }

        return fact;

    }

}
int main()
{
    int iValue=0,iRet=0;

    printf("Enter number ");
    scanf("%d",&iValue);

    iRet=OddFactorial(iValue);

    printf("Odd Factorial number is %d",iRet);

    return 0;
}
