#include<stdio.h>

int CountDiff(char *str)
{
    int cNo=0,sNo=0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            sNo++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            cNo++;
        }
        str++;
    }
    return sNo-cNo;
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String\n");
    scanf("%[^\n]s",arr);

    iRet=CountDiff(arr);

    printf("%d",iRet);

    return 0;
}
