//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern1
//  Input:-            5            |-5
//  Output:-           1 2 3 4 5    |1 2 3 4 5
//  Discription:-      Accept Number From user and Display Pattern.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 24/9/2019
//  Modification Of Code Date:- 02/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern1(int No)
{
    int icnt=0;
    if (No<0)
    {
        No=-No;
    }
    for(icnt=1;icnt<=No;icnt++)
    {
        printf("%d ",icnt);
    }
    
}
int main()
{
    int iValue=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    Pattern1(iValue);
    return 0;
}