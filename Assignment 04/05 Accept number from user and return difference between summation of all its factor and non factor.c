#include<stdio.h>
#include<conio.h>

int FactDiff(int iNo)
{
    int i=1,factSum=0,NonfactSum=0,Diff;
    while(iNo>i)
    {
        if(iNo%i==0)
        {
            factSum=factSum+i;

            ///printf("%d\n",factSum);

        }
        else if(iNo%i!=0)
        {
            NonfactSum=NonfactSum+i;
            ///printf("%d\n",NonfactSum);
        }
        i++;
    }
    Diff=factSum-NonfactSum;
    return Diff;
}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet=FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}
