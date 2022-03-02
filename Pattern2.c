//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern2
//  Input:-            3            
//  Output:-           -3*-2*-1*0*1*2*3*   
//  Discription:-      Accept Number From user and Display Pattern.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 24/9/2019
//  Modification Of Code Date:- 02/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern1(int No)           //3
{
    int icnt=0;
    if (No<0)
    {
        No=-No;
    }
    for(icnt=-No;icnt<=No;icnt++)
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