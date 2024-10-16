#include<stdio.h>
#include<stdbool.h>

void CountFactors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iCount;
        }
    }
    return iCount;
}

int main ()
{
    int iValue = 0;
    
    printf("enter number : \n");
    scanf("%d",&iValue);

    CountFactors(iValue);
    printf("number of factors are : %d\n",iRet);

    return 0;
}