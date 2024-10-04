#include<stdio.h>
#include<conio.h>

double FhtoCs(float fTemp)
{
    return ((fTemp-32)*(5.0/9.0));
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter temperature in fahrenheit ");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);

    printf("Tempreture in fahrenheit is=%f",dRet);

    return 0;
}
