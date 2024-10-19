#include<stdio.h>
#include<string.h>

void DisplayDigit(char *str)
{
    int i= 0;

    while(*str != '\0')
    {
        if(str[i] >= '48' && str[i] <= '57')
        {
            printf(str[i]);
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter String\n");
    scanf("%[^\n]s",arr);

    DisplayDigit(arr);

    printf("Modified string is %s",arr);

    return 0;
}
