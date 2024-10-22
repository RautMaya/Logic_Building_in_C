#include<stdio.h>
#include<string.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'A' || *str == 'a' || *str == 'E' || *str == 'e' || *str == 'I' || *str == 'i' || *str == 'O' || *str == 'o' || *str == 'U' || *str == 'u' )
        {

            return TRUE;
        }
        str++;
    }
    return FALSE;
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String\n");
    scanf("%[^\n]s",arr);

    iRet=ChkVowel(arr);
    if(iRet==TRUE)
    {
        printf("It Contain Vowel");
    }
    else
    {
        printf("It Not Contain Vowel");
    }

    printf("%d",iRet);

    return 0;
}
