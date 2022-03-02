//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern6
//  Input:-            4            
//  Output:-           4*3*2*1*2*3*4* 
//  Discription:-      Accept Number From user and Display Pattern.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 24/9/2019
//  Modification Of Code Date:- 02/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern1(int No)           //No=8
{
    int icnt=0;
    if (No<0)
    {
        No=-No;
    }
    for(icnt=No;icnt>=1;icnt--)     //4*3*2*1*
    {
        printf("%d",icnt);
        printf("*");
    }
    for (icnt=2;icnt<=No;icnt++)  //2*3*4*
    {
        printf("%d",icnt);
        printf("*");
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