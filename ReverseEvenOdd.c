//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  ReverseEvenOdd
//  Input:-            1576      |275
//  Output:-           6 751     |2 57
//  Input:-            2016     |-2617
//  Output:-           620 1     |62 71
//  Discription:-      Accept Number From user and Reverse that number in two parts where the first reverse
//                     number contain only even digit and second reverse no contain only odd digit.
//                     display that both number on screen.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 20/9/2019
//  Modification Of Code Date:- 01/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void ReverseX(int No)
{
    int iDigit=0,Even=0,Odd=0;
    if(No<0)
    {
        No=-No;
    }
    while (No>0)
    {
        iDigit=No%10;
        if (iDigit%2==0)
        {
            Even=(Even*10)+iDigit;
        }
        else
        {
            Odd=(Odd*10)+iDigit;
        }
        No=No/10;
    }
    printf("%d %d",Even,Odd);
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    ReverseX(iValue);
    return 0;
}