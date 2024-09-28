#include<stdio.h>
#include<conio.h>

int  MultFact(int iNo)
{
    int i=1,fact=1;


    while(iNo/2>=i)
    {
        if(iNo%i==0)
        {
            fact=fact*i;
        }
        i++;
    }
    return fact;

}
int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("%d",iRet);
    return 0;
}
