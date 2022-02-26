//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  FactorsOfNumber
//  Input:-            15
//  Output:-           1 3 5
//  Input:-            -15
//  Output:-           1 3 5
//  Discription:-      Accept One Number From User and Display Its Factor.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 5/9/2019
//  Modification Of Code Date:- 26/2/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayFactor(int No)
{
    int icnt=0;
    if(No<0)
    {
        No=-No;     //updator
    }
    for(icnt=1;icnt<No;icnt++)
    {
        if(No%icnt==0)
        {
            printf("%d  ",icnt);
        }
    }
}
int main()
{
    int ivalue;
    printf("Enter Number\n");
    scanf("%d",&ivalue);
    DisplayFactor(ivalue);
    return 0;
}