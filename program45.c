#include<stdio.h>
#include<stdbool.h>

// input : 11     No/2=5       icnt=
// input : 11     No/2=5       icnt=
bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     //updator
    {
        iNo = -iNo; // -(-28)
    }

    for(iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            break;
        }
    }

    if(iCnt > (iNo/2))
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