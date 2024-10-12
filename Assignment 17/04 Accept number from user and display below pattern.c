#include<stdio.h>
#include<conio.h>
void Pattern(int iNo)
{
    int i=0;

    for(i=1;i<=iNo;i++)
    {
        printf("#\t");
        printf("%d\t",i);
        printf("*\t");
    }
}
int main()
{
    int iValue=0;

    printf("Enter number of elements");
    scanf("%d",&iValue);


    Pattern(iValue);

    return 0;
}

