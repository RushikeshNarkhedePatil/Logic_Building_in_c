//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  PalindromeOrNot
//  Input:-            157      |275
//  Output:-           FALSE    |FALSE
//  Input:-            2112     |-262
//  Output:-           TRUE     |TRUE
//  Discription:-      Accept Number From user and Check wether palindrome Or Not.
//                     Palindrome number means actual number and its reverse number as same is called palindrome.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 20/9/2019
//  Modification Of Code Date:- 01/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Reverse(int No)        //Reverse Function
{
    int iDigit=0,iRev=0;
    if(No<0)
    {
        No=-No;
    }
    while (No>0)
    {
        iDigit=No%10;
        iRev=(iRev*10)+iDigit;
        No=No/10;
    }
    return iRev;
}
BOOL ChkPalindromeX(int No)     //Check palindrome Or not. palindrome mhanje actual number ani reverse number
{                               //sarkha asala tar tyala palindrome number mhantat.
    int iRet=0;
    if(No<0)
    {
        No=-No;
    }
    iRet=Reverse(No);
    if (iRet==No)
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
    BOOL bRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    bRet=ChkPalindromeX(iValue);
    if (bRet==TRUE)
    {
        printf("%d Number is Palindrome Number \n",iValue);
    }
    else
    {
        printf("%d Number is not palindrome Number\n",iValue);
    }
    
    return 0;
}