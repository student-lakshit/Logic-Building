/*
accept number as No
serach all its factors
perform addition of all the factors
if addition is same as No
then display as No is perfect number 
otherwise display as No is not yet perfect number
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0, iCount = 0;

    if(iNo < 0)     //updator
    {
        iNo = -iNo; // -(-28)
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iCount++;
            break;
        }
    }
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main ()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if(bRet == true)
    {
        printf("%d is perfect number \n",iValue);
    }
    else
    {
        printf("%d is not perfect number \n",iValue);
    }
    return 0;
}