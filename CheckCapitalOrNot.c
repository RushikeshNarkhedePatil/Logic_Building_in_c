//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CheckCapitalOrNot
//  Input:-            E
//  Output:-           TRUE
//  Input:-            d
//  Output:-           FALSE
//  Discription:-      Accept character from user and check wether it is capital or not.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 9/10/2019
//  Modification Of Code Date:- 14/03/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkCapital(char ch)
{
    if(ch>='A'&&ch<='Z')
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
        printf("Character is capital\n");
    }
    else
    {
        printf("Character is not a capital\n");
    }
    return 0;
}