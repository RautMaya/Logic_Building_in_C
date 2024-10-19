#include<stdio.h>
#include<string.h>

int CountWhite(char *str)
{
    int No=0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            No++;
        }
        str++;
    }
    return No;
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String\n");
    scanf("%[^\n]s",arr);

    iRet = CountWhite(arr);
    printf("%d",iRet);

    return 0;
}
