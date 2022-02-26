//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Factor
//  Input:-            Integer Integer
//  Output:-           boolean
//  Discription:-      Accept Two Number From User and check Second Number is factor of first number Or Not.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 5/9/2019
//  Modification Of Code Date:- 25/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define SUCESS 1
#define FAILUAR 0

typedef int BOOL;

BOOL CheckFactor(int No1,int No2)
{
    if((No1%No2)==0)
    {
        return SUCESS;
    }
    else
    {
        return FAILUAR;
    }
}
int main()
{
    int ivalue1,ivalue2;
    BOOL bRet;
    printf("Enter First Number\n");
    scanf("%d",&ivalue1);
    printf("Enter Second Number\n");
    scanf("%d",&ivalue2);
    bRet=CheckFactor(ivalue1,ivalue2);
    if(bRet==1)
    {
        printf("%d Number is Factor Of %d",ivalue1,ivalue2);
    }
    else
    {
        printf("%d Number is Not Factor Of %d",ivalue1,ivalue2);
    }
}