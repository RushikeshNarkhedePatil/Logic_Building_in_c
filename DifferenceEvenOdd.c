//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  DifferenceEvenOdd
//  Input:-            2395          |1018
//  Output:-           -15(2-17)     |6 (8-2)
//  Input:-            5733            
//  Output:-           -18(0-18)             
//  Discription:-      write a program which accept No From user and return difference between summation of odd digit.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 20/9/2019
//  Modification Of Code Date:- 01/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int No)
{
    int iDigit=0,diff=0,ESum=0,OSum=0;
    if(No<0)
    {
        No=-No;
    }
    while (No>0)
    {
        iDigit=No%10;
        if(iDigit%2==0)
        {
            ESum=ESum+iDigit;
        }
        else
        {
            OSum=OSum+iDigit;
        }
        No=No/10;
    }
    return ESum-OSum;
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet=CountDiff(iValue);
    printf("%d Number of Odd Difference is %d",iValue,iRet);
    return 0;
}