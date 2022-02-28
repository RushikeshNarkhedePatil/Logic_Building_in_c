//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  SumOfDigitGreterThan5
//  Input:-            571      |712345 
//  Output:-           7        |7
//  Input:-            25       |-259
//  Output:-           0        |9
//  Discription:-      Accept Number From user and return the sumesion of digit which is greter than 5.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 18/9/2019
//  Modification Of Code Date:- 28/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumOfDigit(int No)
{
    int iDigit=0,sum=0;

    if(No<0)
    {
        No=-No;
    }

    while(No!=0)
    {
        iDigit=No%10;
        if(iDigit>5)
        {
            sum=sum+iDigit;
        }
        No=No/10;
    }
    return sum;
}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter Number \n");
    scanf("%d",&iValue);
    iRet=SumOfDigit(iValue);
    printf("The Sumession of digit is : %d",iRet);
    return 0;
}