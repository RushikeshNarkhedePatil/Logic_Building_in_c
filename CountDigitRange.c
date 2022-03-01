//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CountDigitRange
//  Input:-            2395     |1018
//  Output:-           1        |0
//  Input:-            4521     |-9922
//  Output:-           2        |0
//  Discription:-      write a program which accept number from user and count digit in between 3 and 7.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 20/9/2019
//  Modification Of Code Date:- 01/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountRange(int No)
{
    int iDigit=0;
    int iCnt=0;
    if(No<0)
    {
        No=-No;
    }
    while (No>0)
    {
        iDigit=No%10;
        if((iDigit>3)&&(iDigit<=7))
        {
            iCnt++;
        }
        No=No/10;
    }
    return iCnt;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number \n");
    scanf("%d",&iValue);
    iRet=CountRange(iValue);
    printf("%d In this number there are %d Number in between 3 to 7 Range\n",iValue,iRet);
    return 0;
}