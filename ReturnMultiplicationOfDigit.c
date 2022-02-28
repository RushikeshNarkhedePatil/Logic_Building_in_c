//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  ReturnMultiplicationOfDigit
//  Input:-            750      |152
//  Output:-           35       |10
//  Input:-            25       |-253
//  Output:-           10       |30
//  Discription:-      Accept Number From user and return the Multiplicatio of digit of that number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 19/9/2019
//  Modification Of Code Date:- 28/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int DigitMult(int No)
{
    int iDigit=0,Mult=1;

    if(No<0)
    {
        No=-No;
    }

    while(No!=0)
    {
        iDigit=No%10;
        Mult=Mult*iDigit;
        No=No/10;
    }
    return Mult;

}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet=DigitMult(iValue);
    printf("%d",iRet);
    return 0;
}