#include<stdio.h>
#include<conio.h>

int SumNonFact(int iNo)
{
    int i=1,fact=0;

    while(iNo>i)
    {
        if(iNo%i!=0)
        {
            fact=fact+i;
        }
        i++;
    }
    return fact;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=SumNonFact(iValue);

    printf("%d",iRet);
    return 0;
}
