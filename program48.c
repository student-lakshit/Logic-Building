#include<stdio.h>

unsigned long int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main ()
{
    int iValue = 0;
    unsigned int iRet = 0;

    printf("enter number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("factorial is : %lu\n",iRet);

    return 0;
}