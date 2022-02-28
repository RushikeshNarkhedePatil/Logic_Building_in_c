//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  SumOfDigitGreterThan5
//  Input:-            571      |712
//  Output:-           175      |217
//  Input:-            25       |-259
//  Output:-           52       |952
//  Discription:-      Accept Number From user and Display its Digit in Reverse order.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 19/9/2019
//  Modification Of Code Date:- 28/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayReverseDigit(int No)
{
    int iDigit=0;

    if(No<0)
    {
        No=-No;
    }

    while(No!=0)
    {
        iDigit=No%10;           //last digit milel
        printf("%d",iDigit);    // print Reverse Digit On Screen
        No=No/10;               //number divide kela jail
    }
    
}
int main()
{
    int iValue=0;
    printf("Enter Number \n");
    scanf("%d",&iValue);
    DisplayReverseDigit(iValue);
    return 0;
}