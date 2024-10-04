#include<stdio.h>
#include<conio.h>

double SquareFeet(int iValue)
{
    return iValue*0.0929;
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter area in square feet ");
    scanf("%f",&fValue);

    dRet=SquareFeet(fValue);

    printf("Area in Square meter=%f",dRet);

    return 0;
}
