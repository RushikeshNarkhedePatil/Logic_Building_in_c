//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CheckDigitOrNot
//  Input:-            9        |A
//  Output:-           FALSE    |FALSE
//  Input:-            d
//  Output:-           TRUE
//  Discription:-      Accept character from user and check wether it is small case or not(a-z).
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
    if(ch>='a'&&ch<='z')
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
        printf("character is a small case\n");
    }
    else
    {
        printf("caharacter is not a small case\n");
    }
    return 0;
}