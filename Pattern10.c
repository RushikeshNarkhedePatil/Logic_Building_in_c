//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern10
//  Input:-            4            
//  Output:-           #1*#2*#3*#4*
//  Discription:-      Accept Number From user and Display Pattern.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 25/9/2019
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
    for (icnt=1;icnt<=No;icnt++)  //#1*#2*#3*#4*
    {
        printf("#%d*",icnt);        
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