
#include<stdio.h>
#include<conio.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    for(i=0;i<=iRow-1;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d",i+j);
        }
        printf("\n");
    }



}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and columns\n");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
