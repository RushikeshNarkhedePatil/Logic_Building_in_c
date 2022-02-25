//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  DivideTwoNumber
//  Input:-            Integer Integer
//  Output:-           Integer
//  Discription:-      Divide Two Number
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 4/9/2019
//  Modification Of Code Date:- 25/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int DivideTwoNumber(int No1,int No2)
{
    int ans=0;
    if(No2==0)
    {
        return -1;  //filter or input validator
    }
    ans=No1/No2;
    return ans;
}
int main()
{
    int ivalue1;
    int ivalue2,iRet;
    printf("Enter First Number\n");
    scanf("%d",&ivalue1);
    printf("Enter second Number\n");
    scanf("%d",&ivalue2);
    iRet=DivideTwoNumber(ivalue1,ivalue2);
    printf("Division of Two Number is %d",iRet);
    return 0;
}