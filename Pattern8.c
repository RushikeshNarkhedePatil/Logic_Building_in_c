//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern8
//  Input:-            5            
//  Output:-           1234****4321
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
    for (icnt=1;icnt<=No;icnt++)  
    {
        printf("%d",icnt);   //1234
    } 
    for (icnt=1;icnt<=No;icnt++)  
    {
        printf("*");        //****
    }
    for (icnt=1;icnt<=No;icnt++)  
    {
        printf("%d",icnt);   //1234
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