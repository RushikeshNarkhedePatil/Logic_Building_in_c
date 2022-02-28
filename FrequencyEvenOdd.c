//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  FrequencyEvenOdd
//  Input:-            753      |152
//  Output:-           0 3      |2 1
//  Input:-            25       |-253
//  Output:-           1 1      |2 1
//  Discription:-      Accept Number From user and Count Even Odd Frequency.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 19/9/2019
//  Modification Of Code Date:- 28/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int FrequencyEvenOdd(int No)
{
    int iDigit=0,Even=0,Odd=0;

    if(No<0)
    {
        No=-No;
    }

    while(No!=0)
    {
        iDigit=No%10;
        if(iDigit%2==0)
        {
            Even++;
        }
        else
        {
            Odd++;
        }
        No=No/10;
    }
    printf("%d %d",Even,Odd);
}
int main()
{
    int iValue=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    FrequencyEvenOdd(iValue);
    return 0;
}