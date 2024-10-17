#include<stdio.h>
#include<conio.h>


int DisplaySchedule(char chDiv)
{
    if(chDiv == 65 || chDiv == 97)
    {
        printf("Your exam at 7 AM");
    }
    else if(chDiv == 66 || chDiv == 98)
    {
        printf("Your exam at 8:30 AM");
    }
    else if (chDiv == 67 || chDiv == 99)
    {
        printf("Your exam at 9:20 AM");
    }
    else
        if(chDiv == 68 || chDiv == 100)
    {
        printf("Your exam at 10:30 AM");
    }

}
int main()
{

    char cValue='\0';

    float bRet;
    printf("Enter your devision\n");
    scanf("%c",&cValue);

    bRet = DisplaySchedule(cValue);

    return 0;
}


