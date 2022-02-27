//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  SumOfFactor
//  Input:-            12
//  Output:-           6
//  Input:-            13
//  Output:-           1 
//  Discription:-      Accept One Number From User and return Largest Factor Factor.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 10/9/2019
//  Modification Of Code Date:- 27/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
int SumOfFactor(int No)
{
    int icnt=0;
    int iLargest=0;
    if(No<0)
    {
        No=-No;     //updator negative number asel tar positive karnyasathi
    }
    // for(icnt=1;icnt<No;icnt++)           //complexity of program O(N)
    // for(icnt=1;icnt<=No/2;icnt++)           //update Reduce Complexity
    // {
    //     if((No%icnt)==0)
    //     {
    //         iLargest=icnt;       
    //     }
    // }
    // return iLargest;

    //other way to Reduce Complexity

    for(icnt=No/2;No>=1;icnt--)
    {
        if(No%icnt==0)
        {
            break;      //break mule first time if madhe gelya gelya break houn loop madhun baher padel v aplyala icnt return honar.
        }
    }
    return icnt;
}
int main()
{
    int ivalue=0,iRet=0;
    printf("Enter Number\n");
    scanf("%d",&ivalue);
    iRet=SumOfFactor(ivalue);
    printf("Largest Factor is : %d\n",iRet);
    return 0;
}
