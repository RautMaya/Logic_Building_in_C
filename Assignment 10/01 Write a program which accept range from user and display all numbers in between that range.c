#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    int i;
    if(iStart<iEnd)
    {
        for(i=iStart;i<=iEnd;i++)
        {
        printf("%d\t",i);
        }
    }
    else if(iStart>iEnd)
    {
        printf("Invalid Range");
    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter Ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;


}
