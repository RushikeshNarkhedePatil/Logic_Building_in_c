//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CountDivisibleBy3
//  Input:-            369      |311
//  Output:-           3        |1
//  Input:-            3333     |-259
//  Output:-           1        |1
//  Discription:-      Accept Number From user and Count all such digit which are divisible by 3.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 19/9/2019
//  Modification Of Code Date:- 28/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DivisibleByThree(int No)
{
    int iDigit=0;
    int iCnt=0;
    if(No<0)
    {
        No=-No;
    }
    while(No!=0)
    {
        iDigit=No%10;
        if((iDigit==3)||(iDigit==6)||(iDigit==9))
        {
            iCnt++;
        }
        No=No/10;
    }
    return iCnt;
}
int main()
{
    int iRet=0,iValue=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet=DivisibleByThree(iValue);
    printf("%d\n",iRet);
}