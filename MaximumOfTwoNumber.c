//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  MaximumOfTwoNumber
//  Input:-            Integer Integer
//  Output:-           Integer
//  Discription:-      return Largest Number
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 3/9/2019
//  Modification Of Code Date:- 25/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MaximumOfTwoNumber(int No1,int No2)
{
    if(No1>No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
    
}
int main()
{
    int iValue1=0,ivalue2=0;
    int iRet=0;
    printf("Enter First Number\n");
    scanf("%d",&iValue1);
    printf("Enter Second Number\n");
    scanf("%d",&ivalue2);
    iRet=MaximumOfTwoNumber(iValue1,ivalue2);
    printf("Largest Number is : %d\n",iRet);

}