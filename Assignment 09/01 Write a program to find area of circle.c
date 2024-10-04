#include<stdio.h>
#include<conio.h>
#define PI 3.14


double CircleArea(float fRadius)
{

   return PI*fRadius*fRadius;



}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);

    printf("Area of Circle is=%0.4f ",dRet,fValue);
    return 0;
}
