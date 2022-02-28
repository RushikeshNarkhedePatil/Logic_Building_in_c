//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  DigitZeroOrNot
//  Input:-            571                     |712
//  Output:-           There is no Zero        |There is not zero
//  Input:-            250                     |-250
//  Output:-           It Contain Zero         |It Contain Zero
//  Discription:-      Accept Number From user and check number it contain zero or not.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 19/9/2019
//  Modification Of Code Date:- 28/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DigitZeroOrNot(int No)
{
    int iDigit=0,Cont=0;

    while (No!=0)
    {
        iDigit=No%10;
        if(iDigit==0)
        {
            return 1;
        }
        No=No/10;
    }
    
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    bRet=DigitZeroOrNot(iValue);
    if(bRet==TRUE)
    {
        printf("It Contain Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }
    return 0;
}