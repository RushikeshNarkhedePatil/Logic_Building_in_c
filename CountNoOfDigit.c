//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CountNoOfDigit
//  Input:-            571      |7 
//  Output:-           3        |1
//  Input:-            25       |-255
//  Output:-           2        |3
//  Discription:-      Accept Number From user and count number of digit of that number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 18/9/2019
//  Modification Of Code Date:- 28/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountDigit(int No)
{
    int iDigit=0;
    int Count=0;

    if(No==0)
    {
        return 1;
    }
    if(No<0)
    {
        No=-No;
    }

    while (No!=0)
    {
        iDigit=No%10;
        Count++;
        No=No/10;
    }
    return Count;
    
}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet=CountDigit(iValue);
    printf("Number of Count is %d",iRet);
    return 0;
}