#include<stdio.h>

void NonFact(int iNo)
{
    int i=1;

    while(iNo>i)
    {
        if(iNo%i!=0)
        {
            printf("%d\n",i);
        }
        i++;
    }
}
int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}
