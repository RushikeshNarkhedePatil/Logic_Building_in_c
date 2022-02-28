//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CountDigitLessThan6
//  Input:-            571      |712345 
//  Output:-           2        |5
//  Input:-            25       |-259
//  Output:-           2        |2
//  Discription:-      Accept Number From user return Count Less than 6.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 18/9/2019
//  Modification Of Code Date:- 28/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DigitLessThanSix(int No)
{
    int iDigit=0,iCnt=0;

    if(No<0)
    {
        No=-No;
    }

    while(No!=0)
    {
        iDigit=No%10;
        if(iDigit<6)
        {
            iCnt++;   
        }
        No=No/10;
    }
    return iCnt;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter Number \n");
    scanf("%d",&iValue);
    iRet=DigitLessThanSix(iValue);
    printf("The Sumession of digit is : %d",iRet);
    return 0;
}