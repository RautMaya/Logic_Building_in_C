#include<stdio.h>
#include<string.h>

void strlwrx(char *str)
{
    int i=0;

    while(*str != '\0')
    {
        if(str[i] >='A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        str++;
    }
    return ;
}
int main()
{
    char arr[20];

    printf("Enter String\n");
    scanf("%[^\n]s",arr);

    strlwrx(arr);

    printf("Modified string is %s",arr);

    return 0;
}
