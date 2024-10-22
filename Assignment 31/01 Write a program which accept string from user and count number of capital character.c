#include<stdio.h>


int CountCapital(char *str)
{

    int iNo=0;
    while( *str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iNo++;
        }
        str++;
    }
    return iNo;
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String");
    scanf("%[^\n]s",arr);

    iRet=CountCapital(arr);

    printf("in String Capital Character is %d",iRet);

    return 0;

}
