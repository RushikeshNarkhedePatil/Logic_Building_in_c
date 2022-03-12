//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CountLengthOfString
//  Input:-            a        |1      |A      |@      |!
//  Output:-           TRUE     |FALSE  |TRUE   |FALSE  |FALSE
//  Discription:-      Accept Character from user and check character or not.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 9/10/2019
//  Modification Of Code Date:- 12/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if((ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z'))
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
    char ch;
    BOOL bRet=FALSE;
    printf("enter string\n");
    scanf("%c",&ch);    //another way  scanf("%[^\n]%*c", arr);
    bRet=ChkAlpha(ch);
    if(bRet==TRUE)
    {
        printf("is alphabet\n");
    }
    else
    {
        printf("Not alphabet\n");
    }
    
    return 0;
}