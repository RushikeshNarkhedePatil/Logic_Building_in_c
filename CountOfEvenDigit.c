//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CountOfEvenDigit
//  Input:-            753      |152
//  Output:-           0        |1
//  Input:-            25       |-253
//  Output:-           1        |1
//  Discription:-      Accept Number From user and Count Even Digit.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 20/9/2019
//  Modification Of Code Date:- 01/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEvenDigit(int No)
{
    int iDigit=0,Even=0;

    if(No<0)
    {
        No=-No;
    }

    while(No!=0)
    {
        iDigit=No%10;
        if(iDigit%2==0)
        {
            Even++;
        }
        No=No/10;
    }
    return Even;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet=CountEvenDigit(iValue);
    printf("%d This Number Contain Count of Even Digit is %d",iValue,iRet);
    return 0;
}