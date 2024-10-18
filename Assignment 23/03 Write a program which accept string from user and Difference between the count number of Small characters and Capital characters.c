#include<stdio.h>
#include<conio.h>

int Difference(char *str)
{
    int siCnt=0,ciCnt=0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            siCnt++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            ciCnt++;
        }
        str++;
    }
    return siCnt - ciCnt;
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String\n");
    scanf("%[^\n]s",arr);

    iRet=Difference(arr);

    printf("%d",iRet);

    return 0;
}

