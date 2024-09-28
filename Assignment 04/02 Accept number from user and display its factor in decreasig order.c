#include<stdio.h>

void FactRev(int iNo)
{
    int i;

    i=iNo/2;
    while(i!=0)
    {
        if(iNo%i==0)
        {
            printf("%d",i);
        }
        i--;
    }

}
int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    FactRev(iValue);
    return 0;
}
