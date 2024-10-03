#include<stdio.h>

void Display(int iNo)
{
    int i;
    while(i<iNo)
    {
        printf("*\t");
        i++;

    }
    for(i;i<iNo;i++)
    {
        printf("#\t");
    }


}
int main()
{
    int iValue=0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
