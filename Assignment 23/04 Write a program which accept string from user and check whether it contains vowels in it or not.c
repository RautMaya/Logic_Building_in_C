#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL ChkVowel(char *str)
{
    int iCnt=0;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'A' || *str == 'e' || *str == 'E' ||*str == 'i' || *str == 'I' || *str == 'o' || *str == 'O' || *str == 'u' || *str == 'U' )
        {
            return TRUE;
        }
        else
        {
            FALSE;
        }
        str++;
    }


}
int main()
{
    char arr[20];
    BOOL bRet=FALSE;

    printf("Enter String\n");
    scanf("%[^\n]s",arr);

    bRet=ChkVowel(arr);
    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}

