#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int i=0;
    char character='A';

    for(i=1;i<=iNo;i++)
    {
        printf("%c\t",character);
        character++;
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
