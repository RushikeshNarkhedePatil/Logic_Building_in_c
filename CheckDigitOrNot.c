//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CheckDigitOrNot
//  Input:-            9
//  Output:-           TRUE
//  Input:-            d
//  Output:-           FALSE
//  Discription:-      Accept character from user and check wether it is digit or not(0-9).
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 9/10/2019
//  Modification Of Code Date:- 16/03/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkCapital(char ch)
{
    if(ch>='0'&&ch<='9')
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
    BOOL bRet=FALSE;
    char cValue='\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);
    bRet=ChkCapital(cValue);
    if(bRet==TRUE)
    {
        printf("It is a Digit\n");
    }
    else
    {
        printf("It is Not a Digit\n");
    }
    return 0;
}