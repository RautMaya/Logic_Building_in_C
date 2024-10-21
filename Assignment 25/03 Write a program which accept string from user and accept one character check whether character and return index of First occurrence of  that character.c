#include<stdio.h>
#include<string.h>


int FirstChar(char *str,char ch)
{

  int i=1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return i;
        }

        str++;
        i++;
    }
    return -1;
}
int main()
{
    char arr[20]="\0";
    char cValue = '\0';
    int iRet=0 ;

    printf("Enter String\n");
    fgets(arr,20,stdin);

    printf("Enter the character\n");
    scanf("%c",&cValue);

    iRet= FirstChar(arr,cValue);

printf("Character Frequency is %d",iRet);

    return 0;
}

