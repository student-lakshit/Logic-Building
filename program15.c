#include<stdio.h>

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))        //Filter
    {
       return 1; 
    }
    if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
int main ()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("please enter your percentage : ");
    scanf("%f", &fValue);

    iRet = DisplayResult(fValue);
    if(iRet == 1)
    {
        printf("your input is valid\n");
    }
    else if(iRet == 2)
    {
        printf("student is fail\n");
    }
    else if(iRet == 3)
    {
        printf("student is pass\n");
    }


    return 0;
}