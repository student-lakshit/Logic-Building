#include<stdio.h>

void Display(int iNo)
{

int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt,iCnt);
        printf("%d\t",iCnt,iCnt);          
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}