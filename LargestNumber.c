//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  LargestNumber
//  Input:-            Integer Integer Integer
//  Output:-           Integer
//  Discription:-      Accept Three Number From User and return Largest Number.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 5/9/2019
//  Modification Of Code Date:- 25/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int LargestNumber(int No1,int No2,int No3)
{
    if((No1>No2)&&(No1>No3))
    {
        return No1;
    }
    else if (No2>No3)
    {
        return No2;
    }
    else 
    {
        return No3;
    }
    
    
}
int main()
{
    int ivalue1,ivalue2,ivalue3,iRet;
    printf("Enter Three Number\n");
    scanf("%d %d %d",&ivalue1,&ivalue2,&ivalue3);
    iRet=LargestNumber(ivalue1,ivalue2,ivalue3);
    printf("Largest Number is %d\n",iRet);
    return 0;
}