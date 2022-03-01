//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  BalanceNoOrNot
//  Input:-            7521       |1526
//  Output:-           FALSE      |TRUE
//  Input:-            25         |-2531
//  Output:-           TRUE       |FALSE
//  Discription:-      Accept Number From user and Check wether number is balance number or not.
//                     Balance number is such a number in which the frequency of even digit is same as odd digit.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 19/9/2019
//  Modification Of Code Date:- 01/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL BalanceNoOrNot(int No)
{
    int iDigit=0,Even=0,Odd=0;

    if(No<0)
    {
        No=-No;
    }
    if (No==0)
    {
        return FALSE;
    }
    

    while(No!=0)
    {
        iDigit=No%10;
        if(iDigit%2==0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
        No=No/10;
    }
    if(Even==Odd)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    bRet=BalanceNoOrNot(iValue);
    if(bRet==TRUE)
    {
        printf("%d  Number is Balance Number\n",iValue);
    }
    else
    {
        printf("%d  Number is not a balance number\n",iValue);
    }
    
    return 0;
}