//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  DivisibleBy3OrNot
//  Input:-            Integer 
//  Output:-           boolean
//  Discription:-      check given number divisible by 3 or not.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 3/9/2019
//  Modification Of Code Date:- 25/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL DivisibleBy3OrNot(int iNo)
{
    if((iNo%3)==0)
    {
        return TRUE;    //return 1
    }
    else
    {
        return FALSE;   //return 0
    }
}
int main()
{
    int iValue;
    BOOL bRet=FALSE;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    bRet=DivisibleBy3OrNot(iValue);
    if(bRet==0)
    {
        printf("Not Divisible by 3\n");
    }
    else
    {
        printf("Divisible by 3\n");
    }
}