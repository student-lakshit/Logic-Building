#include<stdio.h>

int main ()
{
    int iNo = 438;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);  //8

    iNo = iNo / 10;         //43


    return 0;
}