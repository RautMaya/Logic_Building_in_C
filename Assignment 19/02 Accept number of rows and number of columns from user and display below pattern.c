/**

A B C D
a b c d
A B C D
a b c d




**/

#include<stdio.h>
#include<conio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
     char ch;

    for(i=1;i<=iRow;i++)
    {
        for(j=1,ch='A';j<=iCol;j++,ch++)

        {

            if(i%2==1)

           {

            printf("%c\t",ch);
           }

        }
       for(j=1,ch='a';j<=iCol;j++,ch++)
        {

         if(i%2!=1)
           {

            printf("%c\t",ch);


           }
        }
        printf("\n");

    }
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and columns");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}




