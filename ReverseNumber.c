//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  ReverseNumber
//  Input:-            157      |275
//  Output:-           751      |572
//  Input:-            2016     |-2617
//  Output:-           6102     |7162
//  Discription:-      Accept Number From user and return reverse number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 20/9/2019
//  Modification Of Code Date:- 01/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Reverse(int No)
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
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    iRet=Reverse(iValue);
    printf("%d",iRet);
    return 0;
}