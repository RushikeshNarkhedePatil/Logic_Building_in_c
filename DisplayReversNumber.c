//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  FactorReverceOrder
//  Input:-            12
//  Output:-           21
//  Input:-            -12
//  Output:-           21
//  Discription:-      Accept One Number From User and Display its factor in reverce order.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 10/9/2019
//  Modification Of Code Date:- 27/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayReverce(int No)
{
    int iDigit=0;
    if(No<0)
    {
        No=-No;     //updator negetive to positive
    }
    while (No!=0)
    {
        iDigit=No%10;           //get last digit
        No=No/10;
        printf("%d",iDigit);
    }
    

}
int main()
{
    int ivalue=0;
    int iRet=0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);
    DisplayReverce(ivalue);
    return 0;
}