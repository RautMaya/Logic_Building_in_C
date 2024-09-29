#include<stdio.h>
int Multiply(int iNo1,int iNo2, int iNo3)
{
    int Mul;
    if(iNo1==0)
    {
        iNo1=1;
        return iNo1*iNo2*iNo3;
    }
    else if(iNo2==0)
    {
        iNo2=1;
        return iNo1*iNo2*iNo3;
    }
    else if(iNo3==0)
    {
        iNo3=1;
        return iNo1*iNo2*iNo3;
    }
    else
    {
        return iNo1*iNo2*iNo3;

    }

}
int main()
{
    int iValue1=0,iValue2=0,iValue3=0,iRet=0;

    printf("please enter three numbers");
    scanf("%d%d%d",&iValue1,&iValue2,&iValue3);
    iRet =Multiply(iValue1,iValue2,iValue3);
    printf("%d",iRet);

    return 0;
}
