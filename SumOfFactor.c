//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  SumOfFactor
//  Input:-            10
//  Output:-           8
//  Input:-            7
//  Output:-           1 
//  Discription:-      Accept One Number From User and return sum of factor Factor.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 9/9/2019
//  Modification Of Code Date:- 27/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int SumOfFactor(int No)
{
    int icnt=0;
    int isum=0;
    if(No<0)
    {
        No=-No;     //updator negative number asel tar positive karnyasathi
    }
    // for(icnt=1;icnt<No;icnt++)           //complexity of program O(N)
    for(icnt=1;icnt<=No/2;icnt++)           //update Reduce Complexity
    {
        if((No%icnt)==0)
        {
            isum=isum+icnt;
        }
    }
    return isum;
}
int main()
{
    int ivalue=0,iRet=0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);
    iRet=SumOfFactor(ivalue);
    printf("Sum Of Factor is : %d\n",iRet);
    return 0;
}
