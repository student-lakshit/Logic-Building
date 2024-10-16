#include<stdio.h>
#include<stdbool.h>

/*
START
    Accedpt one number as no
    IF the number is greater than 30 and if it is less than 50
    then display the msg as no. is in range
    otherwise
    display the  msg as number is not in the range
stop

*/
bool CheckRange(int iNo)
{
    if((iNo >= 30) && (iNo <= 50))
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

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckRange(iValue);
    if(bRet == true)
    {
        printf("%d is in the range 30 and 50 \n");
    }
    else
    {
        printf("%d is not in the range 30 and 50 \n");
    }

    return 0;
}