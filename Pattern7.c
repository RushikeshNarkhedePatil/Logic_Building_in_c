//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern7
//  Input:-            5            
//  Output:-           3*6*9*12*15*
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
        printf("%d",icnt*3);        //(icnt*3) means 1*3=3 2*3=6 and so on No of time iterate loop and create loop 
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