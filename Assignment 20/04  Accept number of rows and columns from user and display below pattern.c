
#include<stdio.h>
#include<conio.h>

void Pattern(int iRow,int iCol)
{
    int i=0,j=0,No=1;
    for(i=1;i<=iRow;i++)
    {
        for(j=1,No=1;j<=iCol;j++,No++)
        {
            if(i%2!=0)
            {
                printf("%d\t",j);
            }
            else
            {

                printf("%d\t",-j);
            }
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

