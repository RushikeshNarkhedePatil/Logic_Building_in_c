//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name Of Program:-  Pattern9
//  Input:-            4            
//  Output:-           1234
//                     1234
//                     1234
//                     1234
//  Discription:-      Accept Number From user and Display Pattern.
//  Author:-           Rushikesh Dilip Narkhede
//  Actual Date To Write Code:- 24/9/2019
//  Modification Of Code Date:- 02/3/2022
//////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Pattern1(int No)           
{
    int row=0,col=0;
    if (No<0)
    {
        No=-No;
    }
    for (row=1;row<=No;row++)  
    {
        for(col=1;col<=No;col++)
        {
            printf("%d",col);
        }
        printf("\n");
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