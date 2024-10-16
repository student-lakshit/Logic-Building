#include<stdio.h>
#include<stdbool.h>

void SumFactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    printf("Factors of %d are : \n",iNo);

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
    return iSum;
}

int main ()
{
    int iValue = 0;
    
    printf("enter number : \n");
    scanf("%d",&iValue);

    SumFactors(iValue);

    return 0;
}