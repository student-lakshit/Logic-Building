//we have to accept 1 no. from user and check no is even or odd 

#include<stdio.h>
#include<stdbool.h>

//user is going to enter only positive inputs

// algo:
/*
    start
        accept one no. as No
        divide that no. No by 3
        If remainder is 0
        divide that no. No by 5
        If remainder is 0
        then print number is divisible by 3 and 5
        otherwise display the it is not divisible by 3,5
    stop 
*/

//////////////////////////////////////////////////////////
//
// function name: checkevenodd
// description: used to check wether no is divisble by 3 and 5
// input: integer
// output: boolean
// author: lakshit tawale
// date: 15/4/24
//
//////////////////////////////////////////////////////////

bool checkDivisible(unsigned int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {   return true;    }
    else
    {   return false;   }
}

int main ()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("enter number : \n");
    scanf("%d",&iValue);

    bRet = checkDivisible(iValue);

    if (bRet == true)
    {
        printf("%d is divisible by 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by either 3 or 5\n",iValue);
    }
    
    return 0;
}

/*

    logical && operator
    
    */