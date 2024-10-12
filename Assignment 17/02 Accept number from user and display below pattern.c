#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int i;


    for(i=1;i<=iNo;i++)
    {
        printf("%d\t#\t",(iNo-i));

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

