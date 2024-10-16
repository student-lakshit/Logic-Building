#include<stdio.h>

unsigned long int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long int iFact = 1;

    iCnt = 1;
    while( iCnt <= iNo )
    {
        iFact = iFact * iCnt;
        iCnt++;
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