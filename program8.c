//we have to accept 1 no. from user and check no is even or odd 

#include<stdio.h>
#include<stdbool.h>

//user is going to enter only positive inputs

// algo:
/*
    start
        accept one no. as No
        divide that no. No by 2
        If remainder is 0
        then display the result as even no.
        otherwise display the result as odd no.
    stop 
*/

//////////////////////////////////////////////////////////
//
// function name: checkevenodd
// description: used to check wether no is rven or odd
// input: integer
// output: boolean
// author: lakshit tawale
// date: 15/4/24
//
//////////////////////////////////////////////////////////

bool checkEvenOdd(unsigned int iNo)
{
    if((iNo % 2) == 0)
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
    unsigned int iValue = 0;
    bool bRet = false;

    printf("enter number : \n");
    scanf("%d",&iValue);

    bRet = checkEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }
    
    return 0;
}