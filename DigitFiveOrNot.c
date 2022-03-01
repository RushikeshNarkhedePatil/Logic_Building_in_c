//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  DigitFiveOrNot
//  Input:-            7521       |1526
//  Output:-           TRUE       |TRUE
//  Input:-            23         |-231
//  Output:-           FALSE      |FALSE
//  Discription:-      Accept Number From user and Check wether that number contain 5 in it or not.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 19/9/2019
//  Modification Of Code Date:- 01/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(int No)
{
    int iDigit=0;
    if (No<0)
    {
        No=-No;
    }
    
    while (No>0)        //No!=0
    {
        iDigit=No%10;
        if(iDigit==5)
        {
            break;      //break zalyavar loop madhun baher padel v loop chya baher chi if chi condition check hoil.
        }               //mhanje ek veles jari 5 bhetala tar loop la pudhache number check karnyachi garaj nahi.
        No=No/10;
    }
    if (iDigit==5)
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
    bRet=ChkDigit(iValue);
    if (bRet==TRUE)
    {
        printf("%d Number Contain 5 digit\n",iValue);
    }
    else
    {
        printf("%d Number Contain Not 5 digit\n",iValue);
    }
    return 0;
}