//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  ReverseNumberBetweenRange
//  Input:-            464      |1389
//  Output:-           464      |0
//  Input:-            7259     |-2617
//  Output:-           5        |0
//  Discription:-      Accept Number From user and return Reverse Number Bitween Range 3 and 7.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 20/9/2019
//  Modification Of Code Date:- 01/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int ReverseBitweenRange(int No)
{
    int iDigit=0,Rev=0;
    if(No<0)
    {
        No=-No;
    }
    while (No>0)
    {
        iDigit=No%10;
        if ((iDigit>3)&&(iDigit<7))
        {
            Rev=(Rev*10)+iDigit;
        }
        No=No/10;
    }
    return Rev;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet=ReverseBitweenRange(iValue);
    printf("%d",iRet);
    return 0;
}