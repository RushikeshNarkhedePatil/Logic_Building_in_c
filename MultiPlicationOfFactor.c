//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  SumOfFactor
//  Input:-            12
//  Output:-           144  (1*2*3*4*6)
//  Input:-            7
//  Output:-           1 
//  Discription:-      Accept One Number From User and return MultiPlication of Factor.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 11/9/2019
//  Modification Of Code Date:- 27/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int MultiplicationOfFactor(int No)
{
    int icnt=0;
    int iMult=1;
    if(No<0)
    {
        No=-No;     //updator negative number asel tar positive karnyasathi
    }
    // for(icnt=1;icnt<No;icnt++)           //complexity of program O(N)
    for(icnt=1;icnt<=No/2;icnt++)           //update Reduce Complexity
    {
        if((No%icnt)==0)
        {
            iMult=iMult*icnt;
        }
    }
    return iMult;
}
int main()
{
    int ivalue=0,iRet=0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);
    iRet=MultiplicationOfFactor(ivalue);
    printf("Multiplication of Factor is : %d\n",iRet);
    return 0;
}
