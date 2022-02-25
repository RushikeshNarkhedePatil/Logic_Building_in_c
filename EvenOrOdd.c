//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  EvenOrOdd
//  Input:-            Integer  2
//  Output:-           even
//  Input:-            5
//  Output:-           odd
//  Discription:-      Accept one number from user and check even or not.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 5/9/2019
//  Modification Of Code Date:- 25/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;   //change integer name to bool

BOOL EvenOdd(int No)
{
    if((No%2)==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    BOOL bRet=FALSE;
    int ivalue=0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);
    bRet=EvenOdd(ivalue);
    if(bRet==TRUE)
    {
        printf("Number is Even\n");
    }
    else 
    {
        printf("Number is Odd Number\n");
    }
    return 0;
}