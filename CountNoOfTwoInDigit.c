//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  CountNoOfTwoInDigit
//  Input:-            571      |7012 
//  Output:-           0        |1
//  Input:-            2523     |-255232
//  Output:-           2        |3
//  Discription:-      Accept Number From user and count fequency of 2 in it.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 19/9/2019
//  Modification Of Code Date:- 28/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountTwo(int No)
{
    int iDigit=0,iCnt=0;

    if(No<0)
    {
        No=-No;
    }

    while(No!=0)    //use while(No>0) two loop are same
    {
        iDigit=No%10;
        if(iDigit==2)
        {
            iCnt++;
        }
        No=No/10;
    }
    return iCnt;

}
int main()
{
    int iValue=0,iRet=0;
    printf("Enter Number \n");
    scanf("%d",&iValue);
    iRet=CountTwo(iValue);
    printf("%d",iRet);
    return 0;
}