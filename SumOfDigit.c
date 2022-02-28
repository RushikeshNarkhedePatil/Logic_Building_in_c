//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  SumOfDigit
//  Input:-            571      |7 
//  Output:-           13        |7
//  Input:-            25       |-255
//  Output:-           7        |12
//  Discription:-      Accept Number From user and return the Sumession of digit of that number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 18/9/2019
//  Modification Of Code Date:- 28/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DigitSum(int No)
{
    int iDigit=0,Sum=0;

    if(No<0)
    {
        No=-No;
    }

    while(No!=0)
    {
        iDigit=No%10;
        Sum=Sum+iDigit;
        No=No/10;
    }
    return Sum;

}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter Number \n");
    scanf("%d",&iValue);
    iRet=DigitSum(iValue);
    printf("The Sumession of digit is : %d",iRet);
    return 0;
}