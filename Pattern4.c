//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern4
//  Input:-            6            
//  Output:-           1*2#3*4#5*6#  
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
    for(icnt=1;icnt<=No;icnt++)
    {
        if(icnt%2==0)
        {
             printf("%d",icnt);
            printf("#"); 
        }
        else
        {
            printf("%d",icnt);
            printf("*"); 
        }
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