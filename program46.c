#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("factorial is : %d\n",iRet);

    return 0;
}