#include<stdio.h>
#include<stdbool.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iNo / 2; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main ()
{
    int iValue = 0;
    
    printf("enter number : \n");
    scanf("%d",&iValue);

    Display (iValue);

    return 0;
}