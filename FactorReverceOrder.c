//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  FactorReverceOrder
//  Input:-            12
//  Output:-           6 4 3 2 1
//  Input:-            -12
//  Output:-           6 4 3 2 1
//  Discription:-      Accept One Number From User and Display its factor in reverce order.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 10/9/2019
//  Modification Of Code Date:- 27/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void ReverceFactor(int No)
{
    int icnt=0;
    int isum=0;
    if(No<0)
    {
        No=-No;     //updator negative number asel tar positive karnyasathi
    }
    // for(icnt=No;icnt>=1;icnt--)           //complexity of program O(N)
    for(icnt=No/2;icnt>=1;icnt--)           //update Reduce Complexity
    {
        if((No%icnt)==0)
        {
            printf("%d ",icnt);
        }
    }
}
int main()
{
    int ivalue=0,iRet=0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);
    ReverceFactor(ivalue);
    return 0;
}
