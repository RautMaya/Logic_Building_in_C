 #include<stdio.h>
 int Factorical(int iNo)
 {

     int  fact=0,temp=0;


     if(iNo>0)
     {
         for(temp=iNo,fact=1;1<temp;temp--)
         {
             fact=fact*temp;
         }

     }
     else
     {
         printf("Invalid input");
     }
 }
 int main()
 {
     int iValue=0,iRet=0;

     printf("Enter number");
     scanf("%d",&iValue);

     iRet=Factorical(iValue);

     printf("Factorial of number is %d",iRet);
     return 0;
 }
